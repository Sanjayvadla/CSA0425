#include<stdio.h>
int main(){
	int n,i,j;
	printf("enter the number of process : ");
	scanf("%d",&n);
	int m[n][3],a[n][3],nd[n][3];
	printf("Enter the max : \n");
	for(i=0;i<n;i++){
			scanf("%d %d %d",&m[i][0],&m[i][1],&m[i][2]);
	}
	printf("Enter Available : \n");
	for(i=0;i<n;i++){
			scanf("%d %d %d",&a[i][0],&a[i][1],&a[i][2]);
	}
	printf(" need matrix : \n");
	for(i=0;i<n;i++){
		for(j=0;j<3;j++){
			nd[i][j]=m[i][j]-a[i][j];
			
		}
	}
	for(i=0;i<n;i++){
		printf("%d %d %d \n",nd[i][0],nd[i][1],nd[i][2]);
	} 
	
}
