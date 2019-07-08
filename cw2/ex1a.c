#include<stdio.h>
#include<stdlib.h>

void verify_param_passing_for_double(double, double*);
void verify_param_passing_for_parrints(int[], int(*)[]);

int main(int argc, char* argv[]){
	double x; 
	double* px = &x; 
	int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int (*parr)[];
	parr = &arr;	
	
	verify_param_passing_for_double(x, px);
	verify_param_passing_for_parrints(arr, parr);
	
	return EXIT_SUCCESS;
}

void verify_param_passing_for_double(double x, double* px){
	if (&x==px){
		printf("double: pass-by-reference\n");
	}else{
		printf("double: pass-by-value\n");
	}
	return;
}

//really not sure if this is working - getting a warning as of now 
void verify_param_passing_for_parrints(int arr[], int (*parr)[]){
	if(&arr == parr){
		printf("array of ints: pass-by-reference\n");
	}else{
		printf("array of ints: pass-by-value\n");
	}
	return;
}
