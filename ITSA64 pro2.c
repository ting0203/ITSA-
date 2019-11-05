#include<stdio.h>
int main(){
 	int n,i,j,p=0;
 	while( scanf("%d",&n)!=EOF ) {
	 	for(i=n;i>1;i--){
	  		p=0;
		  	for(j=2;j<i;j++){
		   		if(i%j==0){
		    		p=1;
		    		break;
		   		}
		  	}
		  	if(p==0){
		   		printf("%d\n",i);
		   		break;
		  	}
	 	}
 	}
}
