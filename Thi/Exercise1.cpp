#include<stdio.h>
#include<Math.h>
int main(){
	int n;
	double s = 0;
	printf("Hay nhap vao so nguyen : ");
	scanf("%d",&n);
	if(n<=0){
		printf("Ban phai nhap so lon hon 0:");
	}else{

		for(int i =1; i<n;i++){
			s = s+(double)1/i;
		}
		printf("Sum = %f\n",s);
}
	
}
