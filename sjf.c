#include<stdio.h>
int main()
{
	int i,j,n,temp,l=0,s=0;
	printf("enter the number of process : ");
	scanf("%d",&n);
	int f[n],h[n],sum[n],p[n];
	printf("enter the burst time : ");
	for(i=0;i<n;i++){
		scanf("%d",&p[i]);
	}
	for(i=0;i<n;i++){
		f[i]=p[i];
}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(p[i]>p[j]){
			    temp=p[i];
			    p[i]=p[j];
			    p[j]=temp;
			}
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(p[i]==f[j]){
				h[l]=j;
				printf("%d",h[l]);
				l=l+1;
			}
		}
	}
	for(i=1;i<n;i++){
		sum[i]=s+f[h[i-1]];
		s=sum[i];
	}

	s=0;
	for(i=0;i<n;i++){
		s=s+sum[i];
	}
		printf("Average waiting time : %d\n",s/n);
	s=0;
	for(i=0;i<n;i++){
		s=s+sum[i]+f[i];
	}
	printf("average turn around time : %d",s/n);
}
