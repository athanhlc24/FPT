#include<stdio.h>
int timMax(int *p,int n){
	int max = p[0];
	for(int i = 0; i<n;i++){
		if(max<p[i]){
			max = p[i];
		}
		
	}
	return max;
}



int timUCLN(int *p,int n){
	int ucln = 1 ;
	int m = p[0]>0?p[0]:-p[0];
	for(int i= 2 ;i<m;i++ ){
		bool f = true;
		for(int j=2;j<n;j++){
			if(p[j]%i!=0){
				f = false;
				break;
			}
		}
		if(f&&i>ucln){
			ucln = i;
		}
	}
	return ucln;
	
}





int main(){
	int arr[5] = {-9,-2,-5,2,-8};
	int ucln = timUCLN(arr,5);
	printf("So can tim: %d",ucln);
}
