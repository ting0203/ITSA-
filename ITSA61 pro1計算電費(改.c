#include<stdio.h>  

int main()
{
	int ef,i;  
    scanf("%d",&i);
    do{
		scanf("%d", &ef);
    if (ef <= 120)  {
        printf("Summer months:%.2f\n", ef*2.10);  
        printf("Non-Summer months:%.2f\n", ef*2.10) ;
	}
    else if (ef >= 121 && ef <= 330)  {
        printf("Summer months:%.2f\n" , (ef - 120) * 3.02 + 252); 
		printf("Non-Summer months:%.2f\n", (ef - 120) * 2.68 + 252); 
		} 
    else if (ef >= 331 && ef <= 500)  {
        printf("Summer months:%.2f\n", (ef - 330) * 4.39 + 886.2);  
    	printf("Non-Summer months:%.2f\n",(ef - 330) * 3.61 + 814.8); 
		} 
	else if (ef >= 501 && ef <= 700)  {
        printf("Summer months:%.2f\n", (ef - 500) * 4.97 + 1632.5); 
		printf("Non-Summer months:%.2f\n",(ef - 500) * 4.01 + 1428.5);  
		}
    else if (ef >= 701)  {
        printf("Summer months:%.2f\n", (ef - 700) * 5.63 + 2626.5);
		printf("Non-Summer months:%.2f\n", (ef - 700) * 4.50 + 2230.5); 
		} 
	i--;
	}
		while(i>0);
}
