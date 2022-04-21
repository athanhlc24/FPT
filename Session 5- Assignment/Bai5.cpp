#include<stdio.h>
int main(){
	int n;
	printf("Nhap vao n = ");
	scanf("%d",&n);
	int arr[n];
	for(int i = 0;i<n;i++){// duyet mang;
		scanf("%d",&arr[i]);
	}
	int min= 0;
	for(int i = 0;i<n;i++){// duyet cac so de cac so la so duong dieu kien > 0
		if(arr[i]>0){
			min = arr[i];
			break;
		}
	}
	if(min!=0){// di tim so duong nho nhat
		for(int i = 0; i<n ; i++){
			if(arr[i]>0 && arr[i]<min){
				min = arr[i];
			}
		}
		printf("So duong nho nhat: %d\n",min);
		
	}else{
		printf("Khong co so duong trong mang");
	}
}
