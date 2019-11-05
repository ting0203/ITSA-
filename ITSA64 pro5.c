#include<stdio.h>
#include<stdlib.h> 
#include<time.h>
#include<string.h>
void Merge(int eee[],int f,int m,int e);
void MergeSort(int arr[],int f,int e);

int main(){
	
	time_t start = clock();
	time_t end;
	int num,e,i=0,j;
	//char s;
	char f[350000],g[350000];
	char *token;
	scanf("%d",&num);
	while(num>0){
		scanf("%d",&e);
		int arr1[e],arr2[e];
		fflush(stdin);
		fgets(f, sizeof(f), stdin);
		fflush(stdin);
		fgets(g, sizeof(g), stdin); 
		
		token = strtok(f, " ");
		while( token != NULL ){
			arr1[i] = atoi(token);
    		i++;
      		token = strtok(NULL, " ");
   		}
   		i=0;
   		token = strtok(g, " ");
		while( token != NULL ){
			arr2[i] = atoi(token);
    		i++;
      		token = strtok(NULL, " ");
   		}
		/*int f[e],g[e];
		for(i=0;i<e;i++){
			scanf("%d",&f[i]);
		}
		for(i=0;i<e;i++){
			scanf("%d",&g[i]);
		}*/
		start = clock();
		end = clock();
		printf("\n開始排序時間 = %0.f 毫秒",difftime(end,start));
		
		MergeSort(arr1,0,e-1);
		MergeSort(arr2,0,e-1);
		
		end = clock();
		printf("\n結束排序時間 = %0.f 毫秒",difftime(end,start));
		
		double count=0;
		for(i=e-1;i>=0;i--){
			for(j=e-1;j>=0;j--){
				if(arr1[i]>arr2[j]){
					count+=j+1;
					break;
				}
			}
		}
		printf("%0.f\n",count);
		num--;
	}
	
	end = clock();
	printf("\n運行時間 = %0.f 毫秒",difftime(end,start));
}

void MergeSort(int a[],int f,int e){     
	if(f<e){
		int m=(f+e)/2;
		MergeSort(a,f,m);
		MergeSort(a,m+1,e);
		Merge(a,f,m,e);
	}
}
void Merge(int eee[],int f,int m,int e){
	int b1 [m-f+2];
	int b2 [e-m+1];
	int Array [e-f+1];
	int idxLeft = 0, idxRight = 0, i,j,k;
	for(j=0;j<m-f+1;j++){   //放置左結構 
		b1[j]=eee[f+j];	
	}
	b1[j] = 99999;
	for(k=0;k<e-m;k++){    //放置右結構 
		b2[k]=eee[m+1+k];
	}
	b2[k] = 99999;
	for (i = f; i <= e; i++) {         
		if (b1[idxLeft] <= b2[idxRight] ) {      //比較(較小的先放入結構中 
            eee[i] = b1[idxLeft];
			idxLeft++;
        }else{
            eee[i] = b2[idxRight];
			idxRight++;
        }
    }
}
