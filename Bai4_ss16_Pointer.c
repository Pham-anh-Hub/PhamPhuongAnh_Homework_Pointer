#include<stdio.h>
#include<string.h> 
void showArr(int *num, int size){	
	printf("Mang da xay dung la: \n");
	for (int i=0; i<size; i++){
		printf("%d\t", *(num+i)); 
	} 
}
int main(){
	int num[] = {32,4,56,-87,-12,8,64};
	int size = sizeof(num)/sizeof(num[0]);
	showArr(num, size);
	return 0; 
} 
