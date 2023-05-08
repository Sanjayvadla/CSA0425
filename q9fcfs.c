#include<stdio.h>
int main(){
	int n,i,g=0,wt=0,tt=0;
	printf("enter the number of process : ");
	scanf("%d",&n);
	printf("Enter the burst-time : \n");
	int p[n],w[n],t[n];
	for(i=0;i<n;i++){
		scanf("%d",&p[i]);
	}
	w[0]=0;
	for(i=1;i<n;i++){
		w[i]=g+p[i-1];
		g=w[i];
	}
	printf("\n");
	for(i=0;i<n;i++){
		t[i]=w[i]+p[i];
	}
	for(i=0;i<n;i++){
		wt=wt+w[i];
		tt=tt+t[i];
	}
	printf("The average waiting time : %d",wt/n);
	printf("The average turnaround time : %d",tt/n);
}
