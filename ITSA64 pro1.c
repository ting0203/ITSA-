#include<stdio.h>
#include<stdlib.h>
int main(){
	int n,sum;
	scanf("%d",&n);
	while(n>0){
		int l,r,s;
		scanf("%d %d %d",&l,&r,&s);
		sum=l+r+s;
		if(l>=60 && r>=60 && s>=60){
			printf("P\n");
		}
		else if(l<60 && r>=60 && s>=60){
			if(sum>=220){
				printf("P\n");
			}
			else{
				printf("M\n");
			}
		}
		else if(l>=60 && r<60 && s>=60){
			if(sum>=220){
				printf("P\n");
			}
			else{
				printf("M\n");
			}
		}
		else if(l>=60 && r>=60 && s<60){
			if(sum>=220){
				printf("P\n");
			}
			else{
				printf("M\n");
			}
		}
		else if(l<60&&r<60&&s>=80){
			printf("M\n");
		}
		else if(l<60&&s<60&&r>=80){
			printf("M\n");
		}
		else if(s<60&&r<60&&l>=80){
			printf("M\n");
		}
		else{
			printf("F\n");
		}
		n--;
	}
} 
