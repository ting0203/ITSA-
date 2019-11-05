#include<stdio.h>  

int main()
{
	int total=0,m50=0,m10=0,m5=0,m1=0,num,i;
	scanf("%d",num);
	for(i=0;i<num;i++){
		scanf("%d,",&total);
	    m50=total/50; 
	  	m10=(total%50)/10; 
	 	m5=((total%50)%10)/5; 
	 	m1=((total%50)%10)%5; 
	 	if(m50!=0){
	   		printf("NT50=%d\n",m50); 
	   		if(m10!=0){
	    		printf(",NT10=%d\n",m10); 
	  		}
			if(m5!=0){
	    		printf(",NT5=%d\n",m5); 
	  		}
			if(m1!=0){
	    		printf(",NT1=%d\n",m1); 
	    	}
	  	}else if(m10!=0){
	     			printf("NT10=%d\n",m10); 
	     		if(m5!=0){
	     			printf(",NT5=%d\n",m5);
	    		}
	    		if(m1!=0){
	     			printf(",NT1=%d\n",m1);
	    		}
	    }else if(m5!=0){
	     			printf("NT5=%d\n",m5); 
	    		if(m1!=0){
	     			printf(",NT1=%d\n",m1); 
	    		}
	    }else if(m1!=0){
	       		printf("NT1=%d\n",m1); 
		}
	}
}
