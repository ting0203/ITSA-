#include<stdio.h>
void count(); 
int n=0,c=0,d=0,e=0,a=0,b=0,i=0,j=0;
void main(){
	while(scanf("%d %d %d",&n,&a,&b)!=EOF){
		int nn[n],n_out[n];
		for(i=1;i<=n;i++){
			nn[i-1]=i;
		}
		i=a-1;
		if(a>=1&&a<=n&&b>=1&&b<n){
			for(c=n;c>0;c--){
				d=1;
				while(d<b){
					if(nn[i]!=0){
						count();
						d++;
					}
					else{
						count();
					}
				}
				while(nn[i]==0){
					count();
				}
				n_out[j]=nn[i];	
				nn[i]=0;
				count();
				j++;
			}
			for(i=0;i<n-1;i++){
				printf("%d ",n_out[i]);
			}
			printf("%d\n",n_out[i]);
		}
	}
} 
void count(){
	i++;
	if(i>=n){
		i=i%n;
	}
}
