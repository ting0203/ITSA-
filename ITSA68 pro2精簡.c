#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void find(int i, int *t,int level, int now_num, int max_num,
			 int *ans_arr, int *buf_arr, int* ans_weight, int max_weight);

int main(){
	char s[50];
	int t[50], i, j, n=0, temp, max_weight, max_num, now_num;
	int ans_arr[50]={0}, buf_arr[50]={0};
	int ans_weight=0, buf_weight=0;
	while(scanf("%d,%d,%d,%s",&max_weight,&max_num,&now_num,&s)!=EOF){
		char *test = strtok(s, ",");
		i=0;
		//字串切割
		while (test!= NULL) {			 
			t[i] = atoi(test);
			test = strtok(NULL, ",");
			i++;
		}
		for(i=0;i<now_num;i++){
			find(i, t, 1, now_num, max_num, ans_arr, buf_arr, &ans_weight, max_weight);
		}
		//印出答案 
		printf("k%d",ans_arr[0]);
		for(i=1;i<max_num;i++){
			printf(",k%d",ans_arr[i]);
		}
		printf("\n");
	}
} 

//****將每一個答案都算一遍 再將得出的weight做比較**** 
void find(int i, int *t,int level, int now_num, int max_num, int *ans_arr, int *buf_arr, int* ans_weight, int max_weight){
	buf_arr[level-1] = i;				//****將buf_arr裡放入貨櫃代號**** 
	
	int j;
	for(j=level; j<max_num; j++){		//****逐層計算 所以將未到的層級之buf_arr=0**** 
		buf_arr[j] = 0;
	}
	
	int k, buf_weight = 0;
	for(k=0;k<max_num;k++){				//****將每次得出的貨櫃重量加總**** 
		buf_weight += t[buf_arr[k]];
	}
	
	//****假如暫存重量比愈得到答案的重量大 且小於最大載重**** 
	if(buf_weight > *ans_weight && buf_weight<=max_weight){
		for(k=0;k<max_num;k++){			//****將ans_arr的值放入buf_arr裡放的代號**** 
			ans_arr[k] = buf_arr[k];
		}
		*ans_weight = buf_weight;		//****將答案取代**** 
		
	}
	//****當層級未超過最大貨櫃數，往下一個層級去做**** 
	if(level++ < max_num){
		for(j=i+1;j<now_num;j++){
			find(j, t, level, now_num, max_num, ans_arr, buf_arr, &*ans_weight, max_weight);
		}
	}
}
/*15,4,9,1,2,3,4,5,6,7,8,9
200,6,10,21,27,34,41,54,61,17,18,19,10*/
