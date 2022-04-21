#include<stdio.h>
int main(){
	int n,i;
	int x;
	bool f = true;
	printf("Nhap vao mang n = ");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){ // duyet mang
		printf("Nhap vao phan tu thu: %d = \n ",i+1);
		scanf("%d",&arr[i]);
		
	}
	printf("Nhap vao so x = ");
	scanf("%d",&x);
	for(i=0;i<n;i++){
		if(arr[i]/x==1){
			f = false;
			printf("X co trong mang ban vua nhap");
			break;
		
			
		}
	
		}
		if(f){
			printf("X khong co trong mang ban nhap");
		}
		
		
		
	}
