#include<stdio.h>
int main(){
		int n;
	printf("Nhap vao mang n = ");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){ // duyet mang
		printf("Nhap vao phan tu thu: %d = \n ",i+1);
		scanf("%d",&arr[i]);
	}
	int count = 0;
	int max = 0;
	for(int i = 0;i<n;i++){
		if(arr[i]>0){
			count++;
			if(count>max){
				max = count;
			}
		}else{
			count = 0;
		}
	}
	printf("So luot so duong lien tiep nhieu nhat: %d",max);
}
