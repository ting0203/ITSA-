#include<stdio.h>
int main(){
	int line,i,sum;
	while(scanf("%d",&line)!=EOF){
		sum=0;
		for(i=1;i<=line;i++){
			sum=sum+i;
			if(sum>line){
				break;
			}
		}
		i--;
		printf("%d\n",i);
	}
}
