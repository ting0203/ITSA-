#include<stdio.h>
#include<string.h>

int main() {
	int num,n;                  //x->s[]    a����Ʀr���}�C 
	scanf("%d",&num);                      //��J���� 
 	fflush(stdin);
 	for(n=0;n<num;n++){
 		int i,z,b=0,x=0,a=0;
 		char s[50],arr[50],str[50];       //s[] �@�}�l���r��   arr[] ��Ʀr���r��   str[]  �̫�r�� 
		fgets(s, sizeof(s), stdin);           //��J�r�� 
		for(i=0;i<strlen(s);i++){             //�P�_�O�_���Ʀr         i�i�Ψӫ��V  
			if(s[i]>='0' && s[i]<='9'){       //�Y�O�Ʀr 
				arr[a]=s[i];                  //�N�Ʀr��Jarr[] 
				a++;                          //�� a �Narr[]���V�U�@�� 
				if(!(s[i+1]>='0' && s[i+1]<='9')){        //s[i+1]����0-9 
					arr[a]='\0';
					z = atoi(arr);            //�Narr[]�ର��� 
					int lock=1;
					while(lock){              //while�j������Ū�쪺�Ȭ��Ʀr �h���X 
						if(s[x]>='0' && s[x]<='9'){    //s[x] x�q0�}�l�A 
							lock=0;
							i=i+1;
							x=i+1;
							a=0; 
						}
						else{
							if(s[x]!=' '){      //�p�Gs[x]�����ť� 
								str[b]=((s[x]-65)+z)%26+65;
								b++;
								x++;
							} 
							else{
								x++;
							}
						}
					}
				}
			}
			//�D�Ʀr �Ni++(for�j��)
		}
		while(x!=i){
			if(s[x]==' '||s[x]=='\n'){
				x++;
			}
			else{
				str[b]=s[x];
				x++;
				b++;
			}
		}
		
		str[b]='\0';
		 
		for(i=0;i<strlen(str);i++){
			printf("%c",str[i]);
		}
		printf("\n");
	}
}
