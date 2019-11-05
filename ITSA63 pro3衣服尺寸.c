#include<stdio.h>
int main(){
	int tall,weight,age,n;
	float a=0,cap=0,shirt=0,pant=0,add=0,accum=0;
	do{
		scanf("%d %d %d",&tall,&weight,&age);
		scanf("%d",&n);
		a=weight*41.2;
		cap=a/tall;
		shirt=(tall*weight)/634.4;
		pant=weight*0.4;
		if(age>28){
			accum=(age-28)/2;
			pant+=accum*0.25;
			if(age>30){
				add=(age-30)/5;
				shirt+=0.15*add;
			}
		}
		printf("%.2f %.2f %.2f\n",cap,shirt,pant);
	if(n==-1){
		return 0;
	}
	}while(n==0);
} 
