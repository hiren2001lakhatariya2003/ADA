// WAP to find the power of number(REC)

#include <stdio.h>
#include <time.h>

int powers(int,int);	

int main(){
	int number,power;
	
	printf("Number :");
	scanf("%d",&number);
	printf("Power : ");
	scanf("%d",&power);


	double time_req;
	clock_t start_t,end_t;

	start_t = clock();

	int c = powers(number,power);

	end_t = clock();
	time_req = (double)(end_t - start_t)/ CLOCKS_PER_SEC;

	printf("%d \n",c);
	printf("the total time is : %lf",time_req);

}

int powers(int n, int p){
	if(p>1){
		return n * powers(n,(p-1));
	}
	else{
		return n;
	}
}

// number=20 power=10  time is 0.000009