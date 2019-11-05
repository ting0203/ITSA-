#include<stdio.h>
int main(){
	int i,j,count;
	//scanf("%d",&n);
	int a[9]={0};
	//for(i=0;i<n;i++){
	j=0;
		while(scanf("%d %d %d",&a[0+3*j],&a[1+3*j],&a[2+3*j])!=EOF){
			if(j==2){
				count=0;
				if(a[0]==a[1]&&a[1]==a[2]){  //九宮格(看數字鍵 789 
					count++;
				}
				if(a[3]==a[4]&&a[4]==a[5]){  //456 
					count++;
				}
				if(a[6]==a[7]&&a[7]==a[8]){  //123 
					count++;
				}
				if(a[0]==a[3]&&a[3]==a[6]){  //741 
					count++;
				}
				if(a[1]==a[4]&&a[4]==a[7]){  //852 
					count++;
				}
				if(a[2]==a[5]&&a[5]==a[8]){  //963 
					count++;
				}
				if(a[0]==a[4]&&a[4]==a[8]){  //753 
					count++;
				}
				if(a[2]==a[4]&&a[4]==a[6]){  //951 
					count++;
				}
				if(count>0){
					printf("True\n");
				}
				else {
					printf("False\n");
				}
				j=-1;
			}
			j++;
		}
			
	//}
}
