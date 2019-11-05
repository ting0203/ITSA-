#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    float sum=0,N,i;
    while(scanf("%f",&N)!=EOF){
        sum=0;
        if(N==0) return 0;
        for(i=1;i<=N;i++){
            printf("N=%d\n",N);
            sum= sum+4*(1/(2*N-1))*pow(1,N-1);
        }
        printf("%.5f\n",sum);
    }
}