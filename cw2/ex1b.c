#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>
#define XORSWAP(a, b) ((&a)==(&b)? (a) : (((a)^=(b)), ((b)^=(a)), ((a)^=(b))))

void CopyAndSort(int32_t[], int32_t[], uint32_t);

int main(int argc, char* argv[]){
	int32_t a[11] = {3, 2, -5, 7, 13, 4, 1, 7, 8, -8, 6};
	int32_t b[11];
	CopyAndSort(a, b, 11);
	return EXIT_SUCCESS;
}

void CopyAndSort(int32_t a[], int32_t b[], uint32_t len){
	uint32_t i, j;
	for (i = 0; i < len; i++){
		b[i]=a[i];
	}
	
	i = 1;
	while(i < len){
		j = i;
		while((j>0) && (b[j-1]>b[j])){
			XORSWAP(b[j], b[j-1]);
			j-=1;
		}
		i+=1;
	}
	
	printf("The sorted array is \n");
	for (i = 0; i<len; i++){
		printf("%d ", b[i]);
	}
}
