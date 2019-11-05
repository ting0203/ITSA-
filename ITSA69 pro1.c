#include<stdio.h>
int main(){
	char id[10];
	int x,x1,x2,P,i,num;
	while(scanf("%s",&id)!=EOF){
		if(id[0]>=65 && id[0]<=72){		//A-H
			x=id[0]-55;
		}else if(id[0]==73){			//I
			x=34;
		}else if(id[0]>=74 && id[0]<=78){	//J-N	
			x=id[0]-56;
		}else if(id[0]==79){				//O 
			x=35;
		}else if(id[0]>=80 && id[0]<=86){	//P-V
			x=id[0]-57;
		}else if(id[0]==87){				//W
			x=32;
		}else if(id[0]>=88 && id[0]<=89){	//X-Y
			x=id[0]-58;
		}else if(id[0]==90){				//Z
			x=33;
		}
		x1=x/10;
		x2=x%10;
		P=x1+(9*x2)+(8*((int)id[1]-48))+(7*((int)id[2]-48))+(6*((int)id[3]-48))+(5*((int)id[4]-48))+(4*((int)id[5]-48))+(3*((int)id[6]-48))+(2*((int)id[7]-48))+((int)id[8]-48)+((int)id[9]-48);
		if(P%10==0){
			printf("CORRECT!!!\n");
		}else{
			printf("WRONG!!!\n");
		}
	}
}
 
