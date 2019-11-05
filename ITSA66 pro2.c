#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){
	char oper,x[10],y[10],z[10];
	float a,b;
	while(scanf("%s %c %s = %s",&x,&oper,&y,&z)!=EOF){
		if(oper=='+'){
			if(x[0]=='x'){
				a=atoi(z);
				b=atoi(y);
				printf("%.1f\n",a-b);
			}
			else if(y[0]=='x'){
				a=atoi(z);
				b=atoi(x);
				printf("%.1f\n",a-b);
			}
			else if(z[0]=='x'){
				a=atoi(x);
				b=atoi(y);
				printf("%.1f\n",a+b);
			}
		}if(oper=='-'){
			if(x[0]=='x'){
				a=atoi(z);
				b=atoi(y);
				printf("%.1f\n",a+b);
			}
			else if(y[0]=='x'){
				a=atoi(x);
				b=atoi(z);
				printf("%.1f\n",a-b);
			}
			else if(z[0]=='x'){
				a=atoi(x);
				b=atoi(y);
				printf("%.1f\n",a-b);
			}
		}if(oper=='*'){
			if(x[0]=='x'){
				a=atoi(z);
				b=atoi(y);
				printf("%.1f\n",floor(a/b*10)/10);
			}
			else if(y[0]=='x'){
				a=atoi(z);
				b=atoi(x);
				printf("%.1f\n",floor(a/b*10)/10);
			}
			else if(z[0]=='x'){
				a=atoi(x);
				b=atoi(y);
				printf("%.1f\n",a*b);
			}
		}if(oper=='/'){
			if(x[0]=='x'){
				a=atoi(z);
				b=atoi(y);
				printf("%.1f\n",a*b);
			}
			else if(y[0]=='x'){
				a=atoi(x);
				b=atoi(z);
				printf("%.1f\n",floor(a/b*10)/10);
			}
			else if(z[0]=='x'){
				a=atoi(x);
				b=atoi(y);
				printf("%.1f\n",floor(a/b*10)/10);
			}
		}
	}
}
