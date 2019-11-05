#include<stdio.h>
#include<string.h>
int main(){ 
	char str[100]; 
	int i,j,p; 
	while( scanf("%s",&str)!=EOF ) { 
		i=0,j=0,p=0;
		while(str[i] != '\0'){ 
			i++; 
		} 
		i--; 
		while(j<i){ 
			if(str[j] != str[i]){ 
				p=1; 
				break; 
			} 
			j++; 
			i--; 
		}
		if(p!=0) 
			printf("NO\n"); 
		else 
			printf("YES\n");
	}
}
