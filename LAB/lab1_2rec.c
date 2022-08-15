// WAP to print sum of 1 to n(REC)

#include <stdio.h>
#include <time.h>
int sum(int);

int main(){
	int a;
	printf("Enter the number : ");
	scanf("%d",&a);

	clock_t start_t,end_t;
	double time_req;
	start_t = clock();

	int c = sum(a);

	end_t = clock();
	
	time_req = (double)(end_t-start_t)/ CLOCKS_PER_SEC;

	printf("the sum of '1' to '%d' = %d\n",a,c);
	printf("total time = %lf \n",time_req);

}

int sum(int n){
	if(n==1){
		return 1;
	}
	else{
		return n+ sum(n-1);
	}
}

//a =10000 time is 0.000367