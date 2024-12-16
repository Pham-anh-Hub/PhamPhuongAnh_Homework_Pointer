#include <stdio.h>

void addItem(int *num, int *size, int number, int index);

int main(){
    int num[ ] = {34, 76, 12, 98, 23, 56, 32, 54}; 
    int size = sizeof(num)/sizeof(num[0]); 
    int number, index;
    printf("\nMang truoc khi them la: \n");
    for (int i = 0; i < size; i++) {
        printf("%d\t", num[i]);
    }
    printf("\nMoi nhap vao so nguyen muon them: ");
    scanf("%d", &number);
    printf("\nMoi nhap vao vi tri muon them: ");
    scanf("%d", &index);  
    addItem(num, &size, number, index);
    return 0;
}
void addItem(int *num, int *size, int number, int index){
    
    if (index < 0 || index > *size) {
        printf("\nVi tri khong hop le\n");
        return;
    }
    for (int i = *size; i>=index;i--) {
        num[i] = num[i - 1];
    }
    num[index-1] = number;
    (*size)++;
    printf("\nMang sau khi chen la: \n");
    for (int i = 0; i < *size; i++) {
        printf("%d\t", num[i]);
    }
    printf("\n");
}

