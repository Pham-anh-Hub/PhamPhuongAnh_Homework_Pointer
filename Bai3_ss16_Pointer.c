#include<stdio.h>

void sum(int *a, int *b ){
	int result;
	result = *a + *b;
	printf("Tong cua 2 so la: %d", result);
}
int main(){
	int a = 87;
	int b = 82;
	sum(&a, &b);
	return 0;
}
