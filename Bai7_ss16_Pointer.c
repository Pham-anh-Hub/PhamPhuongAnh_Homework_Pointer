#include<stdio.h>

int  arrage(int num[], int size);

int main(){
	int num[] = {32,45,5,67,12,89,54,23,14};
	int size = sizeof(num)/ sizeof(num[0]);
	printf("Mang truoc khi sap xep: \n");
	for(int i=0; i<size; i++){
		printf("%d\t", *(num+i));
	}
	printf("\n");
	 
	printf("Mang sau khi sap xep: \n");
	arrage(&num, size);
	for(int i=0; i<size; i++){
		printf("%d\t", num[i]);
	}
}

int  arrage( int *num, int size){
	int temp;
	int ptr = *num;
	for(int i=0; i<size-1; i++){
		for(int j=0; j<size-1-i; j++){
			if(*(num+j)<*((num+j)+1)){
				temp = *(num+j);
				*(num+j) = *((num+j)+1);
				*((num+j)+1) = temp;
			}
		}	
	}
} 
