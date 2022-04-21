#include<stdio.h>
int main(){
	int n;
	int sodu;
	int tongcacchuso;
	printf("Nhap vao n = ");
	scanf("%d",&n);
	for(;n!=0;){
		sodu = n%10;
		n = n/10;
		tongcacchuso = tongcacchuso + sodu;
		
	}
	printf("Tong cac chu so la: %d", tongcacchuso);
}
