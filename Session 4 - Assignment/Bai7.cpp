#include<stdio.h>
int main(){
	int a,b;
	do{
		printf("Nhap so nguyen duong a= ");
		scanf("%d",&a);
		printf("Nhap so nguyen duong b= ");
		scanf("%d",&b);
	}while(a<=0||a>=b);
	// thoat ra dc day khi a >0 va a<b
	for(int i = a; i<b;i++){
		// ktra xem i co phai so nguyen to hay k
		int c = 0;
		for(int j =1;j<=i;j++){
			if(i%j==0){
				c++;
			}
		}
		if(c==2){
			printf("so nguyen to: %d\n",i);
		}
	}

}
