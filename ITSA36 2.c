#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	int row,n,num,i,j,k;
	char str[10000]={'a'},s;
	fgets(str, sizeof(str), stdin);
	s=getchar();
	scanf("%d",&row);
	num=strlen(str)-1;   //���� 
	n=num/row;    //�C��X�Ӧr 
	if(num%row!=0){
		n=n+1;
	}
	char arr[row][2*n-1];
	k=0;
	for(i=2*n-2;i>=0;i--){   
		if(i%2!=0){
			for(j=0;j<row;j++){  //�N + �[��arr 
				arr[j][i]=s;
			}
		}
		else{
			for(j=0;j<row;j++){     //��str���r��Ū�iarr
				if(str[k]=='\0'||str[k]=='a'||str[k]=='\n'){
					arr[j][i]=' ';
				}
				else{
					arr[j][i]=str[k];
				}
				k++;
			}
		}
	}
	
	for(i=0;i<row;i++){
		for(j=0;j<2*n-1;j++){
			printf("%c",arr[i][j]);
		}
		printf("\n");
	}
} 
