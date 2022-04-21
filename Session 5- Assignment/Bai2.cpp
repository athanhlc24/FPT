#include<stdio.h>
int main(){
	int n,i;
	int c=0;
	float tbc;
	int s=0;
	printf("Nhap vao mang n = ");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){ // duyet mang
		printf("Nhap vao phan tu thu: %d = \n ",i+1);
		scanf("%d",&arr[i]);
		
	}
	for(i=0;i<n;i++){
		if(arr[i]%2!=0&&i%2==0){
			s = s + arr[i];
			c++;
			
		}
		
	}
	tbc = (float)s/c;
	printf("\nTrung binh cong =  %f",tbc);
}
