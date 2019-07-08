/* This example demonstrates that arrays in C are passed by reference, but in fact what's happening
behind the scenes is that the array is promoted to a pointer of the corresponding type, and that pointer is
passed by value - as shown in copyArray, you can change where this call-by-value pointer points, 
thus ending up not changing the caller's array at all.
*/
#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>

void copyArray(int32_t a[], int32_t b[], int32_t n);

int main(int argc, char* argv[]){
	int numbers[] = {9, 8, 1, 9, 5};
	int copiedNumbers[5];
	copyArray(numbers, copiedNumbers, 5); 
	int32_t i;
	
	for(i = 0; i<5; i++){
		printf("numbers[%d]: %d; copiedNumbers[%d] = %d\n", i, numbers[i], i, copiedNumbers[i]); 
	}

}

void copyArray(int32_t src[], int32_t dst[], int32_t size){
	int32_t i;
	//dst = src; 
	for (i = 0; i<size; i++){
		dst[i] = src[i];
	}
	
	return;
}
