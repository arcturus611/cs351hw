#include<stdio.h>
#include<stdlib.h>

int main(int argc, char* argv[]){
	int num;
	char* pEnd;
	char* str1 = "333 really rocks!";
	int i;
	char str2[10];
	char str3[10];
	
	num = (int) strtol(str1, &pEnd, 10);
	printf("*****STRTOL*****\n");
	printf("converted number = %d\n", num);
	printf("str1 = %p\n", str1);
	printf("pEnd = %p\n\n", pEnd);
	
	num = sscanf("3 blind mice", "%d %s %s", &i, str2, str3);
	printf("******SSCANF*****\n");
	printf("filled %d arguments\n", num);
	printf("i = %d\n", i);
	printf("str2 holds %s\n", str2);
	printf("str3 holds %s\n", str3);
	
	return EXIT_SUCCESS;
}
