#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>

int32_t* copyArray(int32_t a[], int32_t n);

int main(int argc, char* argv[]){
	int numbers[] = {9, 8, 1, 9, 5};
	int copiedNumbers[5] = copyArray(numbers, 5); 
	int32_t i;
	
	for(i = 0; i<5; i++){
		printf("numbers[%d]: %d; copiedNumbers[%d] = %d\n", i, numbers[i], i, copiedNumbers[i]); 
	}

}

int32_t* copyArray(int32_t src[], int32_t size){
	int32_t i, dst[size];
	
	for (i = 0; i<size; i++){
		dst[i] = src[i];
	}
	
	return dst;
}
