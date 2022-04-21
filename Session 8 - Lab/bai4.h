#include<stdio.h>
#include<Math.h>
int uocChungLonNhat(int a, int b){
	
	for(int i = 1;i<=a&&i<=b;i++){
		if(a%i==0&&b%i==0){
			int UCLN = i;
			return UCLN;
		}
	}
}
