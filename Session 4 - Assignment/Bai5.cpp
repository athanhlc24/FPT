#include<stdio.h>
int main(){
	int n;
	int max=0;
	int c;
	do{
		printf("Nhap n= ");
		scanf("%d",&n);
		if(n<0){
			printf("Ban vui long nhap lai vi ban nhap so nho hon 0: \n");
		}
	}while(n<0);
	if(n==0){
		max=0;
		printf("So lon nhat cua ban = 0");
	}
	for(;n!=0;){
		c= n%10;
		n = n/10;
		if(c>max){
			max = c;
		}	
	
	}
		printf("So lon nhat cua ban = %d",max);
	
}
