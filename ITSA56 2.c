#include<stdio.h> 
#include<stdlib.h> 
int main(){ 
   int n,N,num1,num2,price1,price2,box1,box2,t,price,b1,b2; 
   while( scanf("%d",&N)!=EOF ) { 
     scanf("%d %d",&num1,&price1); 
      scanf("%d %d",&num2,&price2); 
      int total=0; 
       for(n=0;n<=N;n++){ 
          box1=num1*n; 
           box2=N-box1; 
           if(box2>=0){ 
                t=box2%num2; 
               if(t==0){ 
                  price=n*price1+(box2/num2)*price2; 
                 if(total==0){ 
                      total=price; 
                       b1=n; 
                      b2=box2/num2; 
                  } 
                  if(price<total){ 
                        total=price; 
                       b1=n; 
                      b2=box2/num2; 
                  }    
               } 
          } 
      } 
      if(total==0){ 
          printf("false\n"); 
     } 
      else{ 
          printf("%d %d\n",b1,b2);  
      } 
  }  
}
