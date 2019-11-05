#include<stdio.h>
int main(){
	int n,i;
	while( scanf("%d",&n)!=0 ) {
	float pi=0,k=1;
		if(n==0){
			return 0;
		}else{
			for(i=0;i<n;i++){
				if(i%2==0){
					pi+=4/k;
				}else{
					pi-=4/k;
				}
   				k += 2;
			}
			printf("%.5f\n",pi);
		}
	}
}
