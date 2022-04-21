#include<stdio.h>
int main(){
	int n;
	int c;
	do{
		printf("Nhap vao so nguyen n = ");
		scanf("%d",&n);
		if (n<=0){
			printf("Ban vui long nhap vao so lon hon  0 \n");
			
		}
	}while(n<=0);
	for(;n!=0;){
		c = n%10;
		n = n/10;
	}
	printf("So dau tien trong day so nguyen la: %d",c);
}
