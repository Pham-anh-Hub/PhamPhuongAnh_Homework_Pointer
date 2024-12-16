#include<stdio.h>

void exchange(int *x, int *y ){
	int temp;
	temp = *x; 
	*x = *y;
	*y = temp;
} 
int main(){
	int a = 8;
	int b = 7;
	printf("\nGia tri cua a ban dau: %d",a);
	printf("\nGia tri cua b ban dau: %d\n",b);
	exchange(&a, &b);
	printf("\nGia tri cua a sau khi doi: %d",a);
	printf("\nGia tri cua b sau khi doi: %d",b);
	return 0;
}
	

