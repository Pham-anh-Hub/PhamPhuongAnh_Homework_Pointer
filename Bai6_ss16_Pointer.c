#include <stdio.h> 
int findItem(int *num, int size, int number){
	int index = -1; // Initialize index to -1 to indicate not found 
	for (int i = 0; i < size; i++) { 
		if (num[i] == number){ 
		index = i; // Update index to the current position 
		break; // Exit the loop once the number is found } 
	}
	return index; 
} 

int main() { 
	int num[] = {45, 3, 7, 9, 23, 65, 87, 12, 45, 32, 89}; 
	int number = 23; 
	int size = sizeof(num) / sizeof(num[0]); 
	int index = findItem(num, size, number); 
	if (index != -1) { 
	printf("Vi tri cua so can tim: %d\n", index + 1); // Print the 1-based index 
	} else { 
	printf("So can tim khong co trong mang.\n");
	}
	return 0;
}
}

