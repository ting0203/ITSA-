#include<stdio.h>
void main(){
	int n,i=1,j,c=1,test,k;
	char input[15];
	char str[4][15]={"Hi\n", "Hello\n", "How do you do\n", "How are you\n"};
	while(fgets(input, sizeof(input), stdin)!=NULL) {
		k=0;
		for(j=0;j<4;j++){
			test = strcmp(input,str[j]);
			if(test==0){
				k=1;
				switch(c){  
  					case 1:
						printf("%s",str[0]);
						c++;
						break;
  					case 2:
						printf("%s",str[1]);
						c++;
						break;
  					case 3:
						printf("%s",str[2]);
						c++;
						break;
  					case 4:
						printf("%s",str[3]);
						c=1;
						break;
				}
			}
		}
		if(k!=1){
			printf("Sorry\n");
			c=1;
		}
	} 
}
