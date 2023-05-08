#include <stdio.h>

struct Process {
    int pid;
    int arrival_time;
    int burst_time;
    int remaining_time;
};

void execute_process(struct Process* p) {
    p->remaining_time--;
}

int is_process_completed(struct Process* p) {
    return p->remaining_time == 0;
}

int main() {
    struct Process processes[] = {{1, 0, 5, 5}, {2, 1, 3, 3}, {3, 2, 3, 3}, {4, 4, 1, 1}};
    int n = sizeof(processes) / sizeof(struct Process);
    int completed_processes[n];
    int num_completed_processes = 0;
    int current_time = 0;
    float total_waiting_time = 0;
    float total_turnaround_time = 0;
    
    while (num_completed_processes < n) {
        int ready_processes[n];
        int num_ready_processes = 0;
        
        for (int i = 0; i < n; i++) {
            if (processes[i].arrival_time <= current_time && !is_process_completed(&processes[i])) {
                ready_processes[num_ready_processes++] = i;
            }
        }
        
        if (num_ready_processes == 0) {
            current_time++;
            continue;
        }
        
        int shortest_remaining_time = processes[ready_processes[0]].remaining_time;
        int shortest_process_index = ready_processes[0];
        
        for (int i = 1; i < num_ready_processes; i++) {
            int process_index = ready_processes[i];
            if (processes[process_index].remaining_time < shortest_remaining_time) {
                shortest_remaining_time = processes[process_index].remaining_time;
                shortest_process_index = process_index;
            }
        }
        
        struct Process* p = &processes[shortest_process_index];
        execute_process(p);
        
        if (is_process_completed(p)) {
            completed_processes[num_completed_processes++] = shortest_process_index;
            int finish_time = current_time + 1;
            int waiting_time = finish_time - p->arrival_time - p->burst_time;
            int turnaround_time = finish_time - p->arrival_time;
            total_waiting_time += waiting_time;
            total_turnaround_time += turnaround_time;
        }
        
        current_time++;
    }
    
    float avg_waiting_time = total_waiting_time / n;
    float avg_turnaround_time = total_turnaround_time / n;
    
    printf("Average Waiting Time: %.2f ms\n", avg_waiting_time);
    printf("Average Turnaround Time: %.2f ms\n", avg_turnaround_time);
    
    return 0;
}
