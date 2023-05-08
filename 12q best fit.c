#include<stdio.h>

int main(){
	int m,p,i,g=100000,j,k,h;
	printf("enter the number of memory partitions : ");
	scanf("%d",&m);
	int m1[m];
	printf("Enter the memory partitions : \n");
	for(i=0;i<m;i++){
		scanf("%d",&m1[i]);
	}
	printf("enter the number of processes : ");
	scanf("%d",&p);
	int p1[p];
	printf("Enter the processes : ");
	for(i=0;i<p;i++){
		scanf("%d",&p1[i]);
	}
	
	for(i=0;i<p;i++){
		for(j=0;j<m;j++){
			if(p1[i]<=m1[j]){
				if((m1[j]-p1[i])<=g && (m1[j]-p1[i])>=0){
					g=m1[j]-p1[i];
					h=m1[j];
				}
			}
		}
		if(h!=0){
		printf("%d is partitioned at %d \n",p1[i],h);
	}
	else{
		printf("%d is not partitioned ",p1[i]);
	}
		
		for(k=0;k<m;k++){
			if(m1[k]==h){
				m1[k]=m1[k]-h;
			}
		}
		h=0;
		g=1000000;
	}
}
