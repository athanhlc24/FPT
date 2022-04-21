#include<stdio.h>
#include<Math.h>
int chuviTamGiac(int a,int b,int c){
	int p = a+b+c;
	return p;	
}
int dientichTamGiac(int a,int b, int c){
	float cv = a+b+c;
	float p = ((float)cv)/2;
	float s = sqrt(p*(p-a)*(p-b)*(p-c));
	return s;
}
