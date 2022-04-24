#include<stdio.h>
void menu(){
	printf("	TINH TOAN	\n");
	printf("------------------------\n");
	printf("1. Nhap so\n");
	printf("2. Tinh tong\n");
	printf("3. Tinh hieu\n");
	printf("4. Tinh tich\n");
	printf("5. Tinh thuong\n");
	printf("6. Thoat\n");
}
int tinhTong(int a,int b){
	
	int c = a+b;
	return c;
}
int tinhHieu(int a, int b){
	int c = a - b;
	return c;
}
int tinhTich(int a,int b){
	int c = a*b; 
	return c;
}
double tinhThuong(int a, int b){
	
	
	return b!=0?(double)a/b:NULL;
}

int main(){
	menu();
	int n;
	int a,b;
	bool f = false;
	do{
		menu();
		printf("Hay nhap vao so ma ban muon chon: \n");
		scanf("%d",&n);
		switch (n){
			case 1:
			{
				printf("Hay nhap vao so a = \n");
				scanf("%d",&a);
		
				printf("Hay nhap vao so b = \n");
				scanf("%d",&b);
				f=true;
				break;
			}
		
			case 2:
			{
				int tong = tinhTong(a,b);
				printf("Tong la: %d",tong);
				break;
			}
			
			case 3:
			{
				int hieu = tinhHieu(a,b);
				printf("Hieu la: %d",hieu);
				break;
			}
			
			case 4:
			{
				int tich = tinhTich(a,b);
				printf("Tich la: %d",tich);
				break;	
			}	
			
			case 5: 
			if(!f){
					printf("Ban vui long nhap gia tri 2 so cho truoc\n");
					break;
				}
			{
				double c = tinhThuong(a,b);
				if(c==NULL){
					printf("Khong the chia cho 0\n");
				}else{
					printf("Thuong la: %lf\n",c);
				}
				break;
			}
		}
	}while(n!=6);
	
}
