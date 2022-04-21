#include<stdio.h>
int boiChungNhoNhat(int a,int b){
	int max = a*b;
	for(int i= 1;i<=max;i++){
		if(i%a==0 && i%b==0){
			int BCNN = i;
			return BCNN;
		}
	}
}
