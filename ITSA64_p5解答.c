#include<stdio.h> 
#include<stdlib.h>  
#include<time.h> 
void Merge(int eee[],int f,int m,int e); 
void MergeSort(int arr[],int f,int e); 
 
int main(){ 
   
    int num,e,i,j,n; 
 	scanf("%d",&num); 
  	for(n=0; n<num; n++){
       	scanf("%d",&e); 
        int f[e],g[e]; 
     	for(i=0;i<e;i++){ 
           scanf("%d",&f[i]); 
     	} 
      	for(i=0;i<e;i++){ 
           scanf("%d",&g[i]); 
     	} 
      	MergeSort(f,0,e-1); 
        MergeSort(g,0,e-1); 
      	double count=0; 
      	int flag = e-1;
        for(i=e-1;i>=0;i--){ 
            for(j=flag;j>=0;j--){ 
                if(f[i]>g[j]){ 
                  count+=j+1; 
                    break; 
             	}else{
					flag--;
				}
          	} 
      	} 
      	printf("%0.lf\n",count); 
 	} 
   
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
 	int idxLeft = 0, idxRight = 0, i,j,k; 
  	for(j=0;j<m-f+1;j++){   //放置左結構  
    	b1[j]=eee[f+j];  
   	} 
  	b1[j] = 9999999; 
 	for(k=0;k<e-m;k++){    //放置右結構  
    	b2[k]=eee[m+1+k]; 
  	} 
  	b2[k] = 9999999; 
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
