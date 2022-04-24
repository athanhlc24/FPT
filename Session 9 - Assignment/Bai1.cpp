#include<stdio.h>
#include<string.h>
void menu(){
	printf("	DANH SACH SINH VIEN CUA 1 LOP \n");
	printf("------------------------\n");
	printf("1. Nhap so luong sinh vien cua lop \n");
	printf("2. Nhap danh sach ten sinh vien\n");
	printf("3. Sap xep ten sinh vien theo thu tu alphabet\n");
	printf("4. In ra danh sach sinh vien\n");
	printf("5. Thoat\n");
}
void sapXep(char arr[][50],int sl){
	
		for(int i=0; i< sl-1;i++){
			for(int j = 0; j <sl-1-i;j++){
				
				if(strcmp(arr[j],arr[j+1])>0){
					char tmp[50];
					strcpy(tmp,arr[j]);
					strcpy(arr[j],arr[j+1]);
					strcpy(arr[j+1],tmp);
				}
			}
		}
		printf("Sau khi sap xep\n");
		for(int i = 0;i<sl;i++){
		printf("%s\n",arr[i]);
	}
}


int main(){
	menu();
	int sl;
	int n;
	char arr[sl][50];
	bool f = false;
	do{
		menu();
		printf("Ban Chon:\n");
		scanf("%d",&n);
		
		switch(n){
			case 1: 
			{
				printf("Hay nhap vao so luong sinh vien muon nhap: ");
				scanf("%d",&sl);
				f = true;
				break;
			}
			
			case 2: 
			{
			
				if(!f){
					printf("Hay nhap vao so luong sinh vien truoc\n");
					break;
				}
				for(int i=0; i<sl;i++){
				printf("Hay nhap vao ten sinh vien thu:%d ",i+1);
				scanf("%s",arr[i]);
				}
				break;
			}
			
			case 3: 
			{	
				
				sapXep(arr,sl);
				break;
				
			}
				
			case 4: 
			{
				printf("Danh sach sinh vien la\n");
				for(int i =0;i<sl;i++){
					printf("%s\n",arr[i]);
				}
				break;
			}
			

			
		}
	}while (n!=5);
}

