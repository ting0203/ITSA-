#include<stdio.h>
#include<string.h>
int main(){
	int test;
	scanf("%d",&test);
	while(test>0){
 		char s[100];   
    	char * pch;
		scanf("%s",&s);
    	pch = strtok(s, ",:;");
    	printf("Tokens found:\n");
		while (pch != NULL)
    	{
        	printf("%s\n", pch);
        	pch = strtok(NULL, ",;:");
    	}
	test--;
	}
}
