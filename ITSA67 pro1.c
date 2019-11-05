#include<stdio.h>
int main(){
	int first,second,third,fourth;
	while(scanf("%d\n%d\n%d\n%d",&first,&second,&third,&fourth)!=EOF){
		fflush(stdin);
		if(first==second&&second==third&&third==fourth){	//皆相同 
			printf("WIN\n");
		}else if(first==second&&second==third&&first==third){	//123同 
			printf("R\n");
		}else if(first==second&&second==fourth&&first==fourth){	//124同 
			printf("R\n");
		}else if(first==third&&third==fourth&&first==fourth){	//134同 
			printf("R\n");
		}else if(second==third&&third==fourth&&second==fourth){	//234同 
			printf("R\n");
		}else if(first!=second&&second!=third&&third!=fourth){	//1234不同 
			printf("R\n");
		}else if(first==second){				//12同 
			if(third==fourth&&first>third){		//34同 1>3 
				printf("%d\n",first*2);
			}else if(third==fourth&&first<third){	//34同 1<3 
				printf("%d\n",third*2);
			}else if(third!=fourth&&third+fourth>first){	//34不同 3+4>1 
				printf("%d\n",third+fourth);
			}else if(third!=fourth&&third+fourth==first){	//34不同 3+4=1 
				printf("%d\n",first);
			}
		}else if(first==third){					//13同 
			if(second==fourth&&first>second){	//24同 1>2 
				printf("%d\n",first*2);
			}else if(second==fourth&&first<second){	//24同 1<2 
				printf("%d\n",second*2);
			}else if(second!=fourth&&second+fourth>first){	//24不同 2+4>1 
				printf("%d\n",second+fourth);
			}else if(second!=fourth&&second+fourth==first){	//24不同 2+4=1 
				printf("%d\n",first);
			}
		}else if(first==fourth){				//14同 
			if(second==third&&first>second){	//23同 1>2 
				printf("%d\n",first*2);
			}else if(second==third&&first<second){	//23同 1<2 
				printf("%d\n",second*2);
			}else if(second!=third&&second+third>first){	//23不同 2+3>1 
				printf("%d\n",second+third);
			}else if(second!=third&&second+third==first){	//23不同 2+3=1 
				printf("%d\n",first);
			}
		}else if(second==third){				//23同 
			if(first==fourth&&second>first){	//14同 2>1 
				printf("%d\n",second*2);
			}else if(first==fourth&&second<first){	//14同 2<1 
				printf("%d\n",first*2);
			}else if(first!=fourth&&first+fourth>second){	//14不同 1+4>2 
				printf("%d\n",first+fourth);
			}else if(first!=fourth&&first+fourth==second){	//14不同 1+4<2 
				printf("%d\n",second);
			}
		}else if(second==fourth){				//24同 
			if(first==third&&second>first){		//13同 2>1 
				printf("%d\n",second*2);
			}else if(first==third&&second<first){	//13同 2<1 
				printf("%d\n",first*2);
			}else if(first!=third&&first+third>second){		//13不同 1+3>2 
				printf("%d\n",first+third);
			}else if(first!=third&&first+third==second){	//13不同 1+3=2 
				printf("%d\n",second);
			}
		}else if(third==fourth){				//34同 
			if(first==second&&first<third){		//12同 1<3 
				printf("%d\n",third*2);
			}else if(first==second&&first>third){	//12同 1>3 
				printf("%d\n",first*2);
			}else if(first!=second&&first+second>third){	//12不同 1+2>3 
				printf("%d\n",first+second);
			}else if(first!=second&&first+second==third){	//12不同 1+2=3 
				printf("%d\n",third);
			}
		}
	}
}
