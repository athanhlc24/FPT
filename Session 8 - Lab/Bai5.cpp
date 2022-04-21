#include<stdio.h>
#include"Bai5.h"
int main(){
	int a,b;
	printf("Nhap vao so nguyen a = \n");
	scanf("%d",&a);
	printf("Nhap vao so nguyen b = \n");
	scanf("%d",&b);
	int BCNN = boiChungNhoNhat(a,b);
	printf("Boi chung nho nhat la: %d\n",BCNN);
}
