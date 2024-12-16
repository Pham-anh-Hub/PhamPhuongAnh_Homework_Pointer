#include<stdio.h>
#include<string.h>
void reverse(char inputString[], char reverseString[]);

int main(){
	char inputString[100];
	char reverseString[100]; 
	printf("Moi nhap 1 chuoi: \n");
	fgets(inputString, 100, stdin);
	reverse(inputString, reverseString);
}

void reverse(char inputString[], char reverseString[]){
	int size=strlen(inputString);
	for(int i=0; i<size+1; i++){
		reverseString[i] = inputString[size - 1 - i];
	}
	printf("\nChuoi sau khi dao nguoc: %s", reverseString);
	
}
