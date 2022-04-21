#include<stdio.h>
int main() {
 int a,b;
 
 int ucln;
 int bcnn;
 int max;
 do{
 	printf("Nhap vao a= ");
 	scanf("%d",&a);
 	printf("Nhap vao b= ");
 	scanf("%d",&b);
 }while(a<=0 || b<=0);
 for(int i=1; i<=a&&i<=b;i++){
 	if(a%i==0 && b%i==0){
 		 ucln = i ;
 		 break;
	 }
	  
 }
		 printf("UCLN= %d\n",ucln);
	max = a*b;
 for(int i =1; i <= max ; i++ ){
 	if(i%a==0 && i%b==0){
		bcnn = i;
		break;
	 }
 }
 
 
 		printf("BCNN= %d",bcnn);
}
