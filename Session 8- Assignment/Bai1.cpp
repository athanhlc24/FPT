#include<stdio.h>
#include<Math.h>

int tinhSoMu(int x, int y){
	int s = pow(x,y);
	return s;
	
}






int main(){
	int x,y;
	
	printf("Nhap vao x= \n");
	scanf("%d",&x);
	printf("Nhap vao y= \n");
	scanf("%d",&y);
	int s = tinhSoMu(x,y);
	printf("S= %d\n",s);
}
