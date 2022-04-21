#include<stdio.h>
int main(){
	int n;
	printf("Nhap n= ");
	scanf("%d",&n);
	int x0=0 , x1= 1 , x2 = 1;
	for(int i = 3; i<=n ; i++){
		x0=1;
		x1=x2;
		x2 = x0 + x1;
	}
	printf("So can tim %d\n",x2);
}
