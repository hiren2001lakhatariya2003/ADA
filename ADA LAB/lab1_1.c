// WAP to print factorial of the number

#include <stdio.h>
#include <time.h>

int main()
{
	long a;
	long fact=1;
	printf("Enter the number : ");
	scanf("%ld",&a);

	clock_t start_t,end_t;
	double time_req;
	start_t = clock();
	for(int i=a;i>=1;i--)
	{
		fact*=i;
	}
	end_t = clock();
	
	time_req = (double)(end_t-start_t)/ CLOCKS_PER_SEC;

	printf("the factorial of %ld = %ld\n",a,fact);
	printf("total time = %lf \n",time_req);
	return 0;


}

// a = 24  time is 0.000004 