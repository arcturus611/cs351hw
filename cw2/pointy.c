#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>

int main(int argc, char** argv){
	int32_t x = 351;
	int32_t* p;
	
	p = &x; 
	printf("&x is %p\n", &x);
	printf("p is %p\n", p);
	printf("x is %d\n", x); 
	
	*p = 333; 
	printf("x is %d\n", x);
	
	return EXIT_SUCCESS; 
}
