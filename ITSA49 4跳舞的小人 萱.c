#include<stdio.h>
#include<string.h> 

int main(){
	int a;
	scanf("%d",&a);
	fflush(stdin);
	while(a!=0){
		int i,j=0,k,y=0,n=0,w=0,back;                          //x:��r y:��� 
		char input[100],num[100],num2[100],str[100],str2[100];
		fgets(input, sizeof(input), stdin);
  		for(i=strlen(input)-2;i>=0;i--){
  			j=0;
  			n=0;
  			if(input[i]>='A'&&input[i]<='Z'){
  				while(input[i]>='A'&&input[i]<='Z'){
	  				str[w]=input[i];	
					w++;
					i--;
				}
				i--;
			  }
  			
  			while(input[i]>='0'&&input[i]<='9'){              //�Ʀr 
  				num[n]=input[i];                              //�s�J�Ʀr
  				n++;
  				i--;
  			}
  			num[n] = '\0';
  			for(k=strlen(num)-1;k>=0;k--){                    //����Ʀr 
				num2[j]=num[k];	
				j++;
		 	}
			num2[j] = '\0';	
			back=atoi(num2);
			i--;
			while(input[i]>='A'&&input[i]<='Z'){          //�r�� 
				if(i>=0){         
					str[w]=((input[i]-65)+back)%26+65;       //�s�J�r��
					w++;
					i-=2;
				}
			}
			i++;
		}
		str[w] = '\0';
		for(k=strlen(str)-1;k>=0;k--){                       //���৹�����r�� 
			str2[y]=str[k];	
			y++;
	 	}
		str2[y] = '\0';
		
		for(i=0;i<strlen(str);i++){
			printf("%c",str2[i]);
		}
		printf ("\n");
  		a--;
	}	
}
