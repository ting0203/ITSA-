#include <stdio.h>
#include <stdlib.h>


int main(int argc) {
	int n,m=0;
	scanf("%d",&n);
	char data[n];
	int location[4][4];//y,x
	int i,iii,j;
	char c;
	for(i = 0;i<n;i++){
		
		scanf("%c",&c);
		data[i]=c;
	}
	for(i =0;i<4;i++){
		for(j =0;j<4;j++){
			scanf("%d",&m);
			location[i][j]=m;
		}
	}
	for(iii = 0;iii<n;iii++){
		switch(data[iii]){
			case 'U':
				for(i =0;i<4;i++){
					for(j =0;j<4;j++){
						scanf("%d",&m);
						location[i][j]=m;
					}
				}
				for(i = 0;i<3;i++){
					for(j=0;j<4;j++){
						if(location[i][j]==location[i+1][j]&&location[i][j]!=0){
							location[i][j]*=2;
							location[i+1][j]=0;
							
						}
						if(i!=0){
							if(location[i][j]!=0&&location[i-1][j]==0){
								location[i-1][j]=location[i][j];
								location[i][j]=0;
							}
						}
					}
				}
				
			break;
			case 'D':
				for(i = 3;i>0;i--){
					for(j=0;j<4;j++){
						if(location[i][j]==location[i-1][j]&&location[i][j]!=0){
							location[i][j]*=2;
							location[i-1][j]=0;
						}
						if(i!=3){
							if(location[i][j]!=0&&location[i+1][j]==0){
								location[i+1][j]=location[i][j];
								location[i][j]=0;
							}
						}
					}
				}
			break;
			case 'L'://ек 
				for(i = 0;i<3;i++){
					for(j=0;j<4;j++){
						if(location[j][i]==location[j+1][i]&&location[j][i]!=0){
							location[j][i]*=2;
							location[j+1][i]=0;
							
						}
						if(i!=0){
							if(location[j][i]!=0&&location[j-1][i]==0){
								location[j-1][i]=location[j][i];
								location[j][i]=0;
							}
						}
					}
				}
			break;
			case 'R':
			break; 
			
			
			
		}
		
		
		
		
		
		
	}
	for(i = 0;i<4;i++){
		for(j = 0;j<4;j++){
			printf("%d ",location[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
