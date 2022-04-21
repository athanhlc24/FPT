#include<stdio.h>
int main(){
	int n;
	printf("Nhap n = ");
	scanf("%d",&n);
	int arr[n];
	for(int i = 0; i<n;i++){
		printf("Nhap vao phan tu thu: %d = \n ",i+1);
		scanf("%d",&arr[i]);
	}
	for(int i = n;i>=0;i--){
		if(arr[i]%2!=0){
			printf("So le cuoi cung cua mang la %d\n",arr[i]);
			break;
		}
	}
}
