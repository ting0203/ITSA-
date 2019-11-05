#include<stdio.h>
#include<stdlib.h>
int main(){
	int N,i,j,k,a,temp;
	scanf("%d",&N);
	int actor[N][6];
	for(i=0;i<N;i++){   //輸入個別分數 
		scanf("%d %d %d %d %d",&actor[i][0],&actor[i][1],&actor[i][2],&actor[i][3],&actor[i][4]);
	}
	for(i=0;i<N;i++){     //計算總分 
		actor[i][5]=actor[i][1]*30/100+actor[i][2]*30/100+actor[i][3]*20/100+actor[i][4]*20/100;
	}
	for(i=0;i<N;i++){     //排序 
		for(j=i+1;j<N;j++){
			if(actor[i][5]<actor[j][5]){    //如果1號分數<2號分數 
				for(k=0;k<6;k++){
					temp=actor[i][k];
					actor[i][k]=actor[j][k];
					actor[j][k]=temp;
				}
			}
			if(actor[i][5]==actor[j][5]){
				if(actor[i][0]>actor[j][0]){
					for(a=0;a<6;a++){
						temp=actor[i][a];
						actor[i][a]=actor[j][a];
						actor[j][a]=temp;
					}
				}	
			}
		}
	}
	if(N<=3){
		printf("%d\n",actor[0][0]);
	}
	else{
		printf("%d %d %d\n",actor[0][0],actor[1][0],actor[2][0]);
	}
} 
