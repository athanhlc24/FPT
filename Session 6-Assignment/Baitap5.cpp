#include<stdio.h>
int main(){
	int n;
	printf("Nhap n = ");
	scanf("%d",&n);
	int arr[n];
	printf("Nhap mang:\n");
	for(int i = 0; i<n; i++){
		scanf("%d",&arr[i]);
	}
	for(int i = 0; i<n; i++){
		if(arr[i]%2 !=0){
			for(int j = i+1; j<n-1;j++){
				if(arr[j]%2!=0 && arr[i]>arr[j]){
					int tmp = arr[j];
					arr[j] = arr[i];
					arr[i] = tmp;
				}
			}
		}
	}
	for(int i = 0; i<n;i++){
		printf("%d  ",arr[i]);
	}
}
