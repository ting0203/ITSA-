#include<stdio.h>
int main(){
	int a[2][11],i,j=0,n,num=0,lar=0;
		while(scanf("%d",&a[0][j]) != EOF && getchar() != '\n'){
			a[1][j++]=1;
		}
		int len=j+1;
		a[1][j] = 1; 
		for(i=0;i<11;i++){
			for(j=i+1;j<len;j++){
				if(a[0][i]==a[0][j]){
					a[1][j]=a[1][i]+1;
				}
			}
		}
		for(i=0;i<11;i++){
			for(j=i+1;j<len;j++){
				if(a[1][i]<a[1][j]){
					num=a[1][j];
					lar=a[0][j];
				}
			}
		}
		/*for(i=0;i<2;i++){
			for(j=0;j<len;j++){
				printf("%d ",a[i][j]);
			}
			puts("");
		}
		printf("%d %d\n",num,len/2);*/
		if(num>len/2){
			printf("%d\n",lar);
		}
		else{
			printf("NO\n");
		}
} 
