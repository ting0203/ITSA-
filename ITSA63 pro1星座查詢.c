#include<stdio.h>
int main(){
	int month,day,i,n;
	scanf("%d", &n);
	for(i=0;i<n;i++){
		scanf("%d %d", &month, &day); 
		switch (month){
  		case 1:
   		if (day > 20) printf("Aquarius\n");
   		else   printf("Capricorn\n"); break;
  		case 2:
   		if (day > 18) printf("Pisces\n");
   		else   printf("Aquarius\n"); break;
  		case 3:
   		if (day > 20) printf("Aries\n");
  		else   printf("Pisces\n"); break;
  		case 4:
   		if (day > 20) printf("Taurus\n");
   		else   printf("Aries\n"); break;
  		case 5:
   		if (day > 21) printf("Gemini\n");
   		else   printf("Taurus\n"); break;
  		case 6:
   		if (day > 21) printf("Cancer\n");
   		else   printf("Gemini\n"); break;
  		case 07:
   		if (day > 22) printf("Leo\n");
   		else   printf("Cancer\n"); break;
  		case 8:
   		if (day > 23) printf("Virgo\n");
   		else   printf("Leo\n"); break;
  		case 9:
   		if (day > 23) printf("Libra\n");
   		else   printf("Virgo\n"); break;
  		case 10:
		if (day > 23) printf("Scorpio\n");
		else   printf("Libra\n"); break;
		case 11:
		if (day > 22) printf("Sagittarius\n");
		else   printf("Scorpio\n"); break;
		case 12:
		if (day > 21) printf("Capricorn\n");
		else   printf("Sagittarius\n"); break;
		} 
 	}
}
