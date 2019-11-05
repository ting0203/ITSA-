#include<stdio.h>
#include<stdlib.h>
int main(){
	int t,m,k,n,i,j,a,c,d,temp,total;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		total=0;
		scanf("%d %d %d",&t,&m,&k);
		int price[k];
		for(j=0;j<k;j++){
			scanf("%d",&price[j]);
		}
		for(c=0;c<k;c++){
			for(d=c+1;d<k;d++){
				if(price[c]>price[d]){
					temp=price[c];
					price[c]=price[d];
					price[d]=temp;
				} 
			}	
		}
		for(a=0;a<m;a++){
				total+=price[a];
		}
		if(total>t){
			printf("Impossible\n");
		}
		else{
			printf("%d\n",total);
		}
	}
} 
