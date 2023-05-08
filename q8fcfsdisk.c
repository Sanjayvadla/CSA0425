#include<stdio.h>

int main(){
	int t,i,h,m=0;
	printf("Enter the number of tracks : ");
	scanf("%d",&t);
	int p[t+1];
	printf("Enter the track positions : \n");
	for(i=1;i<t+1;i++){
		scanf("%d",&p[i]);
	}
	printf("Enter the head position : ");
	scanf("%d",&h);
	p[0]=h;
	for(i=0;i<t;i++){
		if(p[i]>p[i+1]){
			m=m+p[i]-p[i+1];
			printf("%d-%d + ",p[i],p[i+1]);
		}
		else{
			m=m+p[i+1]-p[i];
			printf("%d-%d + ",p[i+1],p[i]);
		}
	}
	printf("= %d",m);
}
