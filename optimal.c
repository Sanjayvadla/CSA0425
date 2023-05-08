#include<stdio.h>

int main(){
	int n,i,j,k,m,h,z=1,u,l=0,f1=0;
	printf("Enter the no.of frames : ");
	scanf("%d",&n);
	int f[n];
	for(i=0;i<n;i++){
		f[i]=0;
	}
	int p[]={7,0,1,2,0,3,0,4,2,3,0,3,2,1,2,0,1,7,0,1};
	int g=sizeof(p)/sizeof(p[0]);
	
	for(i=0;i<g;i++){
		for(j=0;j<n;j++){
			if(p[i]==f[j]){
				z=z*0;
				break;
			}
		}
		if(z==0){
			h=h+1;
			z=1;
		}
		else{
			f1=f1+1;
			for(k=i+1;k<g;k++){
				for(m=0;m<n;m++){
					if(p[k]==f[m]){
						if(l==n){
							u=m;
							break;
						}
						else{
							l=l+1;
						}
					}
				}
			}
			f[u]=p[i];
			for(k=0;k<n;k++)
				printf("%d",f[k]);
		}
	}
	printf("%d\n",f1-5);
	printf("%d",h+5);
	
}
