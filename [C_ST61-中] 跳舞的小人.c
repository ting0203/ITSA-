#include<stdio.h>
#include<string.h>

int main() {
	int num,n;
	char s[50];              //s[] 一開始的字串
	while(fgets(s, sizeof(s), stdin)!=NULL){	
 		int i,z,b=0,x=0,a=0;
 		char arr[50],str[50];       //   arr[] 放數字的字串   str[]  最後字串 
		for(i=0;i<strlen(s);i++){             //判斷是否為數字   
			if(s[i]>='0' && s[i]<='9'){       //若是數字 
				arr[a]=s[i];                  //將數字放入arr[] 
				a++;                          //用 a 將arr[]指向下一個 
				if(!(s[i+1]>='0' && s[i+1]<='9')){        //s[i+1]不為0-9 表示數字部分結束 
					arr[a]='\0';
					z = atoi(arr);            //將arr[]轉為整數 
					int lock=1;               //while迴圈執行條件 
					while(lock){              
						if(s[x]>='0' && s[x]<='9'){    //s[x]->(原輸入字串)  x從0開始判斷， 若遇到數字則將lock=0  跳出迴圈 
							lock=0;         //while迴圈停止條件 
							i=i+1;          //將索引值指到下一格(空白 
							x=i+1;          //已跳過數字 指向空白的下一格 
							a=0; 
						}
						else{
							if(s[x]!=' '){      //如果s[x]不為空白 
								str[b]=((s[x]-65)+z)%26+65;      //將字元移至0-26的範圍 再加入要退後的數字 再取餘數 再加回至65-90 
								b++;
								x++;
							} 
							else{     //若為空白  直接將索引移至下一格 
								x++;
							}
						}
					}
				}
			}
			//非數字 將i++(for迴圈)
		}
		while(x!=i){                   //若最後判斷完字串後 指標只停留在最後一格數字 則將之後的英文放置str[] 
			if(s[x]==' '||s[x]=='\n'){     //若s[x]為' ' 或'\0'則直接將指標移動到下一格 
				x++;
			}
			else{                         //若s[x]為字母 則將s[x]放至str[b] 
				str[b]=s[x];
				x++;
				b++;
			}
		}
		str[b]='\0';            //放入字串結尾 
		 
		for(i=0;i<strlen(str);i++){     //印出 
			printf("%c",str[i]);
		}
		printf("\n");
	}
}
