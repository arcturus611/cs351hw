#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>

int sumAll(int32_t a[], int);

int main(int argc, char* argv[]){
	int32_t numbers[] = {9, 8, 1, 9, 5};
	int32_t sum = sumAll(numbers, 5);
	printf("The sum is %d.\n", sum);
	return EXIT_SUCCESS;
}

int sumAll(int32_t a[], int n){
	int val = 0;
	for (int i = 0; i<n; i++){
		val+= a[i];
	}
	return val;
}
