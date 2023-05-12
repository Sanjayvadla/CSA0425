#include<stdio.h>
#define g 3


int main()
{
	int i,j,n,m;
	printf("Enter the number of resources : ");
	scanf("%d",&m);
	printf("Enter the number of processes :");
	scanf("%d",&n);
	
	int p[n][m],a[n][m],N[n][m],av[m];
	printf("Enter the Max : \n");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&p[i][j]);
		}
	}
	printf("Enter the allocation : \n");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter the available : \n");
	for(i=0;i<m;i++)
		scanf("%d",&av[i]);
	printf("Need : \n");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			N[i][j]=p[i][j]-a[i][j];
			printf("%d ",N[i][j]);
		}
		printf("\n");
	}
	
	
}
