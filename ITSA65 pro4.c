#include<stdio.h>
int main(){
	int n,c,d,e,a,b,i,j=0;
	scanf("%d %d %d",&n,&a,&b);
	int nn[n],n_out[n];
	for(i=1;i<=n;i++){
		nn[i-1]=i;
	}
	i=a-1;
	c=n;
	if(a>=1&&a<=n&&b>=1&&b<n)
	{
		while(c!=0){
			d=1;
			while(d<b){
				if(nn[i]!=0){
					i++;
					if(i>=n){
						i=i%n;
					}
					d++;
				}
				else{
					i++;
					if(i>=n){
						i=i%n;
					}
				}
			}
			while(nn[i]==0){
				i++;
				if(i>=n){
					i=i%n;
				}
			}
			n_out[j]=nn[i];	
			nn[i]=0;
			i++;
			if(i>=n){
				i=i%n;
			}
			j++;
			c--;
		}
		for(i=0;i<n-1;i++)
		{
			printf("%d ",n_out[i]);
		}
		printf("%d\n",n_out[i]);
	}
}
