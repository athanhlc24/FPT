#include<stdio.h>
int main(){
	int n;
	int i;
	int s=0;
	do{
		
		printf("Nhap n= ");
		scanf("%d",&n);
	}while(n<=0);
		
	
	for(i=1;i<=n;i++){
		if(n%i==0){
			printf("Cac uoc cua %d la: %d\n",n,i);
			s=s+i;
		}
	}
	printf("Tong cac uoc la: %d",s);
}
