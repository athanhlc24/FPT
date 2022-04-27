#include <stdio.h>
#include "arr.h"
int main(){
	int k;
	do{
		printf("Nhap k=");
		scanf("%d",&k);
	}while(k<=0);
	int arr[k];
	inPutMang(arr,k);
	printf("Mang dao nguoc la:\n");
	outPutDaoNguoc(arr,k);	
}
