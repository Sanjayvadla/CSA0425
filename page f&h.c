#include<stdio.h>
int main(){
	int n,i,j,z=1,h=0,f=0,r=0,k,p1;
	printf("Enter the number of frames and number of pages: ");
	scanf("%d,%d",&p1,&n);
		int p[p1],page[n];
	for(i=0;i<n;i++){
		scanf("%d",&page[i]);
	}

	
	for(i=0;i<n;i++){
	    for(j=0;j<p1;j++){
	    	if(p[j]==page[i]){
	    	    z=z*0;
			}
			else{
				z=z*1;
			}
		}
		if(z==0){
			h=h+1;
		}
		else
		{
			f=f+1;
			if(r<3){
			p[r]=page[i];
		    }
		    else{
		    	r=0;
			}
			r=r+1;
		}
    
	}
	printf("hit=%d\n",f);
	printf("fault =%d",h);
}
