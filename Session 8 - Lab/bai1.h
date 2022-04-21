#include<stdio.h>
int tinhTongSoNguyen(int n){
	int s = 0;
	for(;n!=0;){
		s=s+n%10;
		n= n/10;
		
	}
	return s;
	
}
