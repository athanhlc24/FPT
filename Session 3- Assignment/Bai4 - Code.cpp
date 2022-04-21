#include<stdio.h>
int main(){
	int n;
	printf("Nhap n = ");
	scanf("%d",&n);
	int t = 0;
	while(n!=0){
		t = t*10+n%10;
		n= n /10;
	}
	printf("So dao nguoc: %d\n",t);
}
