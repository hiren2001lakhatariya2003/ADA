// WAP to print factorial of the number (REC)

#include <time.h>
#include <stdio.h>
long fact(long);

int main()
{
	long a;
	
	printf("Enter the number : ");
	scanf("%ld",&a);

	clock_t start_t,end_t;
	double time_req;
	start_t = clock();

	long c = fact(a);


	end_t = clock();
	
	time_req = (double)(end_t-start_t)/ CLOCKS_PER_SEC;

	printf("the factorial of %ld = %ld\n",a,c);
	printf("total time = %lf \n",time_req);

}

long fact(long n)
{
	int f=1;
	if(n==1)
	{
		return 1;
	}
	else
	{
		return n*fact(n-1);
	}
}
// a = 24  time is 0.000009