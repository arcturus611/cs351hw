#include<stdio.h>
#include<stdint.h> //for int32_t
#include<stdlib.h> //for EXIT_SUCCESS

#define XORSWAP(a, b) ((&(a) == &(b)) ? (a) : ((a)^=(b), (b)^=(a), (a)^=(b)))

void reverse_array(int32_t[], int32_t);

int main(int argc, char* argv[]){
	int numbers[5] = {1, 2, 3, 4, 5};
	reverse_array(numbers, 5);
	return EXIT_SUCCESS; 
}

void reverse_array(int32_t arr[], int32_t len){
	for(int j = 0; j < len; j++){
		printf("%d ", arr[j]);
	}
	printf("\n");
	for(int i = 0; i < len/2; i++){
		XORSWAP(arr[i], arr[len-i-1]);
	}
	printf("\n **** SWAPPED ARRAY**** \n");
	for(int k = 0; k < len; k++){
		printf("%d ", arr[k]);
	}
	printf("\n");
	return; 
}
