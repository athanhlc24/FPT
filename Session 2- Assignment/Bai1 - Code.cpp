#include<stdio.h>
#include<math.h>
int main(){
	int a ;
	printf("Hay nhap vao mot so: ");
	scanf("%d",&a);
	if(2<=a<=7){
		printf("Hom nay la thu:%d",a);
		
	}
	else{
		if(a==8){
			printf("Hom nay la chu nhat");
		}
		else {
			printf("Day khong phai la cac ngay trong tuan");
		}
	}
}







