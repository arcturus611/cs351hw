#include<stdio.h>
#include<stdlib.h>

int main(int argc, char** argv){
	int32_t x = 1;
	int32_t arr[3] = {2, 3, 4};
	int32_t* p = &arr[1];
	
	printf("&x: %p; x: %d\n", &x, x);
	printf("&arr[0]: %p; arr[0]: %d\n", &arr[0], arr[0]);
	printf("&arr[2]: %p; arr[2]: %d\n", &arr[2], arr[2]);
	printf("&p: %p; p: %p; *p: %d\n", &p, p, *p);
	printf("&arr[1]: %p; arr[1]: %d\n", p, *p);
	
	return EXIT_SUCCESS;
}
