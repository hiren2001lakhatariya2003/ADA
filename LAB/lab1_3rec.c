// WAP to print first 50 natural number (REC)
#include <stdio.h>
#include <time.h>

void num(int);

int main(){
	int a=1;
	
	double time_req;
	clock_t start_t,end_t;

	start_t = clock();

	num(a);

	end_t = clock();
	time_req = (double)(end_t - start_t)/ CLOCKS_PER_SEC;
	printf("the total time is : %lf",time_req);
}

void num(int n){
	if(n<=50){
		printf("%d\n",n);
		num(n+1);
	}
}

// time is 0.000093