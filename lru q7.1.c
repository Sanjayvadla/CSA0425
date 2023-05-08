#include <stdio.h>

int main() {
    int n, frames[10], pages[20], i, j, k, flag, fault = 0, count = 0;
    printf("Enter the number of page frames: ");
    scanf("%d", &n);
    printf("Enter the page reference sequence: ");
    for(i = 0; i < 20; i++)
        scanf("%d", &pages[i]);

    for(i = 0; i < n; i++)
        frames[i] = -1;

    for(i = 0; i < 20; i++) {
        flag = 0;
        for(j = 0; j < n; j++) {
            if(frames[j] == pages[i]) {
                flag = 1;
                break;
            }
        }
        if(flag == 0) {
            if(count < n) {
                frames[count] = pages[i];
                count++;
            }
            else {
                int pos[10] = {-1,-1,-1};
                for(j = 0; j < n; j++) {
                    for(k = i - 1; k >= 0; k--) {
                        if(frames[j] == pages[k]) {
                            pos[j] = k;
                            break;
                        }
                    }
                }
                int max = -1, rep = -1;
                for(j = 0; j < n; j++) {
                    if(pos[j] == -1) {
                        rep = j;
                        break;
                    }
                    if(pos[j] > max) {
                        max = pos[j];
                        rep = j;
                    }
                }
                frames[rep] = pages[i];
                fault++;
            }
        }
    }
    printf("Number of page faults: %d\n", fault);
}
