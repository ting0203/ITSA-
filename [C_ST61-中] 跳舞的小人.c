#include<stdio.h>
#include<string.h>

int main() {
	int num,n;
	char s[50];              //s[] �@�}�l���r��
	while(fgets(s, sizeof(s), stdin)!=NULL){	
 		int i,z,b=0,x=0,a=0;
 		char arr[50],str[50];       //   arr[] ��Ʀr���r��   str[]  �̫�r�� 
		for(i=0;i<strlen(s);i++){             //�P�_�O�_���Ʀr   
			if(s[i]>='0' && s[i]<='9'){       //�Y�O�Ʀr 
				arr[a]=s[i];                  //�N�Ʀr��Jarr[] 
				a++;                          //�� a �Narr[]���V�U�@�� 
				if(!(s[i+1]>='0' && s[i+1]<='9')){        //s[i+1]����0-9 ��ܼƦr�������� 
					arr[a]='\0';
					z = atoi(arr);            //�Narr[]�ର��� 
					int lock=1;               //while�j�������� 
					while(lock){              
						if(s[x]>='0' && s[x]<='9'){    //s[x]->(���J�r��)  x�q0�}�l�P�_�A �Y�J��Ʀr�h�Nlock=0  ���X�j�� 
							lock=0;         //while�j�鰱����� 
							i=i+1;          //�N���ޭȫ���U�@��(�ť� 
							x=i+1;          //�w���L�Ʀr ���V�ťժ��U�@�� 
							a=0; 
						}
						else{
							if(s[x]!=' '){      //�p�Gs[x]�����ť� 
								str[b]=((s[x]-65)+z)%26+65;      //�N�r������0-26���d�� �A�[�J�n�h�᪺�Ʀr �A���l�� �A�[�^��65-90 
								b++;
								x++;
							} 
							else{     //�Y���ť�  �����N���޲��ܤU�@�� 
								x++;
							}
						}
					}
				}
			}
			//�D�Ʀr �Ni++(for�j��)
		}
		while(x!=i){                   //�Y�̫�P�_���r��� ���Хu���d�b�̫�@��Ʀr �h�N���᪺�^���mstr[] 
			if(s[x]==' '||s[x]=='\n'){     //�Ys[x]��' ' ��'\0'�h�����N���в��ʨ�U�@�� 
				x++;
			}
			else{                         //�Ys[x]���r�� �h�Ns[x]���str[b] 
				str[b]=s[x];
				x++;
				b++;
			}
		}
		str[b]='\0';            //��J�r�굲�� 
		 
		for(i=0;i<strlen(str);i++){     //�L�X 
			printf("%c",str[i]);
		}
		printf("\n");
	}
}
