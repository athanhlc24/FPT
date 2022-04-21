#include<stdio.h>
#include"bai4.h"
int main(){
	int a,b;
	printf("Nhap vao so nguyen a = \n");
	scanf("%d",&a);
	printf("Nhap vao so nguyen b = \n");
	scanf("%d",&b);
	int UCLN = uocChungLonNhat(a,b);
	printf("UCLN la: %d\n",UCLN);
}
