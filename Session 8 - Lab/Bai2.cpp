#include<stdio.h>
#include"bai2.h"
int main(){
	int a= 3, b = 4, c=6;
	int tinhChuVi = chuviTamGiac(a,b,c);
	printf("Chu vi tam giac la: %d\n",tinhChuVi);
	float tinhDienTich = dientichTamGiac(a,b,c);
	printf("Dien tich tam giac la: %f\n",tinhDienTich);
}
