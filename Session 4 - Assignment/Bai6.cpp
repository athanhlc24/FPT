#include<stdio.h>
int main(){
	int n;
	printf("Nhap n = ");
	scanf("%d",&n);
	bool f = true;
	int m = n;
	while(n!=0){
		int sd = m%10;
		if(sd%2==0){
			f = false;
			printf("%d khong phai la toan chu so le",n);
			break;
		}
		m = m/10;
	}
	if(f){
		printf("%d toan chu so le",n);
	}	
}
