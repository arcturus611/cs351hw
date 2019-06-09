#include<stdio.h>

void pi_estimation(int n){
	double x = 0.0;
	int s; //sign
	
	for (int i = 0; i <= n; i++){
		if (i==0){
			x = 3.0; // hardcoding zeroth case to avoid div by zero
		}else{	
			s = (i%2 == 0 ? -1 : 1); 
			x+= s*4.0/((2*i)*(2*i+1)*(2*i+2)); 
		}
	}
	
	printf("Our estimate of Pi up to %d digits is %0.20lf\n", n, x); 
}

int main(int argc, char** argv){
	int n; char term;
	if (scanf("%d%c", &n, &term)!=2 || term!= '\n' || n<0){
		printf("Invalid input: please enter a non-negative integer and then press return\n");
		return 0;
	}
	
	pi_estimation(n);
	return 0;
}
