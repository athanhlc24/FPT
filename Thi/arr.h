#include <stdio.h>
void inPutMang (int arr[],int n){
	for(int i=0;i<n;i++){
		printf("Ban hay nhap vao mang phan tu thu %d:",i+1);
		scanf("%d",&arr[i]);
	}
}
void outPutDaoNguoc(int arr[],int n){
	for(int i=n-1;i>=0;i--){
		printf("%5d",arr[i]);
	}
}
