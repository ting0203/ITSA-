#include<stdio.h>
int main(){
	int first,second,third,fourth;
	while(scanf("%d\n%d\n%d\n%d",&first,&second,&third,&fourth)!=EOF){
		fflush(stdin);
		if(first==second&&second==third&&third==fourth){	//�ҬۦP 
			printf("WIN\n");
		}else if(first==second&&second==third&&first==third){	//123�P 
			printf("R\n");
		}else if(first==second&&second==fourth&&first==fourth){	//124�P 
			printf("R\n");
		}else if(first==third&&third==fourth&&first==fourth){	//134�P 
			printf("R\n");
		}else if(second==third&&third==fourth&&second==fourth){	//234�P 
			printf("R\n");
		}else if(first!=second&&second!=third&&third!=fourth){	//1234���P 
			printf("R\n");
		}else if(first==second){				//12�P 
			if(third==fourth&&first>third){		//34�P 1>3 
				printf("%d\n",first*2);
			}else if(third==fourth&&first<third){	//34�P 1<3 
				printf("%d\n",third*2);
			}else if(third!=fourth&&third+fourth>first){	//34���P 3+4>1 
				printf("%d\n",third+fourth);
			}else if(third!=fourth&&third+fourth==first){	//34���P 3+4=1 
				printf("%d\n",first);
			}
		}else if(first==third){					//13�P 
			if(second==fourth&&first>second){	//24�P 1>2 
				printf("%d\n",first*2);
			}else if(second==fourth&&first<second){	//24�P 1<2 
				printf("%d\n",second*2);
			}else if(second!=fourth&&second+fourth>first){	//24���P 2+4>1 
				printf("%d\n",second+fourth);
			}else if(second!=fourth&&second+fourth==first){	//24���P 2+4=1 
				printf("%d\n",first);
			}
		}else if(first==fourth){				//14�P 
			if(second==third&&first>second){	//23�P 1>2 
				printf("%d\n",first*2);
			}else if(second==third&&first<second){	//23�P 1<2 
				printf("%d\n",second*2);
			}else if(second!=third&&second+third>first){	//23���P 2+3>1 
				printf("%d\n",second+third);
			}else if(second!=third&&second+third==first){	//23���P 2+3=1 
				printf("%d\n",first);
			}
		}else if(second==third){				//23�P 
			if(first==fourth&&second>first){	//14�P 2>1 
				printf("%d\n",second*2);
			}else if(first==fourth&&second<first){	//14�P 2<1 
				printf("%d\n",first*2);
			}else if(first!=fourth&&first+fourth>second){	//14���P 1+4>2 
				printf("%d\n",first+fourth);
			}else if(first!=fourth&&first+fourth==second){	//14���P 1+4<2 
				printf("%d\n",second);
			}
		}else if(second==fourth){				//24�P 
			if(first==third&&second>first){		//13�P 2>1 
				printf("%d\n",second*2);
			}else if(first==third&&second<first){	//13�P 2<1 
				printf("%d\n",first*2);
			}else if(first!=third&&first+third>second){		//13���P 1+3>2 
				printf("%d\n",first+third);
			}else if(first!=third&&first+third==second){	//13���P 1+3=2 
				printf("%d\n",second);
			}
		}else if(third==fourth){				//34�P 
			if(first==second&&first<third){		//12�P 1<3 
				printf("%d\n",third*2);
			}else if(first==second&&first>third){	//12�P 1>3 
				printf("%d\n",first*2);
			}else if(first!=second&&first+second>third){	//12���P 1+2>3 
				printf("%d\n",first+second);
			}else if(first!=second&&first+second==third){	//12���P 1+2=3 
				printf("%d\n",third);
			}
		}
	}
}
