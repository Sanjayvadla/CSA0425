#include<stdio.h>
#define f 5
int safe(int a[][f],int n[][f],int av[])
{
	int k,l=0,i=0,j,z=1;
	int y[5][5],d[5][5];
	while(i<4){
		for(j=0;j<3;j++){
			if(n[i][j]>av[j]){
				z=z*0;
			}
			else{
				z=z*1;
			}
		}
		if(z==1){
			for(k=0;k<3;k++){
				av[k]=av[k]+a[i][k];
			}
		}
		else{
			z=1;
			for(k=0;k<3;k++){
				y[i][k]=n[i][k];
				d[i][k]=a[i][j];
			}
			l=l+1;
		}
		
		i=i+1;
		
	}
	if(l!=0){
			safe(d,y,av);
		}
		else{
			printf(" System is safe");
		}

}


main()
{
	printf("allocation");
	int a[10][5],n[10][5],av[3],i,j;
	for(i=0;i<4;i++){
			scanf("%d %d %d",&a[i][0],&a[i][1],&a[i][2]);
	}
	printf("need");
	for(i=0;i<4;i++){
			scanf("%d %d %d",&n[i][0],&n[i][1],&n[i][2]);
	}
	printf("Enter the available value ");
    scanf("%d %d %d",&av[0],&av[1],&av[2]);
	safe(a,n,av);
}
