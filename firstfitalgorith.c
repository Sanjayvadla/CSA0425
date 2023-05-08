#include<stdio.h>
int main()
{
	int m1,p1,i,j;
	printf("enter the number of memory partitions : ");
	scanf("%d",&m1);
	printf("Enter the number of process : ");
	scanf("%d",&p1);
	int m[m1],p[p1];
	printf("enter the memory partitions : \n");
	for(i=0;i<m1;i++){
		scanf("%d",&m[i]);
	}
	printf("enter the processes : \n");
	for(i=0;i<p1;i++){
		scanf("%d",&p[i]);
	}
	i=0;
	while(i<p1){
		for(j=0;j<m1;j++){
			if(p[i]<=m[j]){
				printf("%d is partitioned at %d \n",p[i],m[j]);
				m[j]=m[j]-p[i];
				i=i+1;
			}
		}
	}
}
