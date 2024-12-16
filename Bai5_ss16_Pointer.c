#include<stdio.h>

void updateArr(int *num, int number, int index);


int main(){
	int num[7] = {32,4,56,-87,-12,8,64};
	int number = 100;
	int index = 4; 
	updateArr(num, number, index);
	return 0; 
}


void updateArr(int *num, int number, int index){
	printf("Mang da ban dau la: \n");
	for (int i=0; i<7; i++){
		printf("%d\t", *(num+i)); 
	} 
		
	for(int i = 7; i>=index-1;i--){
	//Dich chuyen  
		 
	}
	num[index-1] = number;//chen gia tri do vao vi tri index
	printf("\n"); 

	printf("\nMang sau khi cap nhat: \n");
	for(int i = 0; i<7; i++){
		printf("%d\t",num[i]);
	}
}
