#include<stdio.h>
#include<string.h>

int main() {
	int num,n;                  //x->s[]    a计皚 
	scanf("%d",&num);                      //块代戈 
 	fflush(stdin);
 	for(n=0;n<num;n++){
 		int i,z,b=0,x=0,a=0;
 		char s[50],arr[50],str[50];       //s[] 秨﹍﹃   arr[] 计﹃   str[]  程﹃ 
		fgets(s, sizeof(s), stdin);           //块﹃ 
		for(i=0;i<strlen(s);i++){             //耞琌计         iノㄓ  
			if(s[i]>='0' && s[i]<='9'){       //璝琌计 
				arr[a]=s[i];                  //盢计arr[] 
				a++;                          //ノ a 盢arr[] 
				if(!(s[i+1]>='0' && s[i+1]<='9')){        //s[i+1]ぃ0-9 
					arr[a]='\0';
					z = atoi(arr);            //盢arr[]锣俱计 
					int lock=1;
					while(lock){              //while癹伴磅︽弄计 玥铬 
						if(s[x]>='0' && s[x]<='9'){    //s[x] x眖0秨﹍ 
							lock=0;
							i=i+1;
							x=i+1;
							a=0; 
						}
						else{
							if(s[x]!=' '){      //狦s[x]ぃフ 
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
			//獶计 盢i++(for癹伴)
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
