#include<stdio.h> 
int main(){
	int i, r, num, h_digit, t_digit, s_digit;
	scanf("%d", &r);
	for(i=0; i<r; i++){
		scanf("%d", &num);
		h_digit = num/100;
		t_digit = (num%100)/10;
		s_digit = num%10;
		
		if(h_digit != 0){
			switch(h_digit){
				case 1:
					printf("C");
					break;
				case 2:
					printf("CC");
					break;
				case 3:
					printf("CCC");
					break;
				case 4:
					printf("CD");
					break;
				case 5:
					printf("D");
					break;
				case 6:
					printf("DC");
					break;
				case 7:
					printf("DCC");
					break;
				case 8:
					printf("DCCC");
					break;
				case 9:	
					printf("CM");
					break;
			}	
		}
		if(t_digit != 0){
			switch(t_digit){
				case 1:
					printf("X");
					break;
				case 2:
					printf("XX");
					break;
				case 3:
					printf("XXX");
					break;
				case 4:
					printf("XL");
					break;
				case 5:
					printf("L");
					break;
				case 6:
					printf("LX");
					break;
				case 7:
					printf("LXX");
					break;
				case 8:
					printf("LXXX");
					break;
				case 9:	
					printf("XC");
					break;
			}
		}
		if(s_digit != 0){
			switch(s_digit){
				case 1:
					printf("I");
					break;
				case 2:
					printf("II");
					break;
				case 3:
					printf("III");
					break;
				case 4:
					printf("IV");
					break;
				case 5:
					printf("V");
					break;
				case 6:
					printf("VI");
					break;
				case 7:
					printf("VII");
					break;
				case 8:
					printf("VIII");
					break;
				case 9:	
					printf("IX");
					break;
			}
		}
		printf("\n");
	}
}
