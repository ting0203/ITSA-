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
		//�r�����
		while (test!= NULL) {			 
			t[i] = atoi(test);
			test = strtok(NULL, ",");
			i++;
		}
		for(i=0;i<now_num;i++){
			find(i, t, 1, now_num, max_num, ans_arr, buf_arr, &ans_weight, max_weight);
		}
		//�L�X���� 
		printf("k%d",ans_arr[0]);
		for(i=1;i<max_num;i++){
			printf(",k%d",ans_arr[i]);
		}
		printf("\n");
	}
} 

//****�N�C�@�ӵ��׳���@�M �A�N�o�X��weight�����**** 
void find(int i, int *t,int level, int now_num, int max_num, int *ans_arr, int *buf_arr, int* ans_weight, int max_weight){
	buf_arr[level-1] = i;				//****�Nbuf_arr�̩�J�f�d�N��**** 
	
	int j;
	for(j=level; j<max_num; j++){		//****�v�h�p�� �ҥH�N���쪺�h�Ť�buf_arr=0**** 
		buf_arr[j] = 0;
	}
	
	int k, buf_weight = 0;
	for(k=0;k<max_num;k++){				//****�N�C���o�X���f�d���q�[�`**** 
		buf_weight += t[buf_arr[k]];
	}
	
	//****���p�Ȧs���q��U�o�쵪�ת����q�j �B�p��̤j����**** 
	if(buf_weight > *ans_weight && buf_weight<=max_weight){
		for(k=0;k<max_num;k++){			//****�Nans_arr���ȩ�Jbuf_arr�̩񪺥N��**** 
			ans_arr[k] = buf_arr[k];
		}
		*ans_weight = buf_weight;		//****�N���ר��N**** 
		
	}
	//****��h�ť��W�L�̤j�f�d�ơA���U�@�Ӽh�ťh��**** 
	if(level++ < max_num){
		for(j=i+1;j<now_num;j++){
			find(j, t, level, now_num, max_num, ans_arr, buf_arr, &*ans_weight, max_weight);
		}
	}
}
/*15,4,9,1,2,3,4,5,6,7,8,9
200,6,10,21,27,34,41,54,61,17,18,19,10*/
