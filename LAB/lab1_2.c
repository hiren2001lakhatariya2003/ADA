// WAP to print sum of 1 to n

#include <time.h>
#include <stdio.h>

int main()
{
	int a;
	int sum = 0;


	printf("Enter the number : ");
	scanf("%d",&a);

	clock_t start_t,end_t;
	double time_req;
	start_t = clock();

	for(int i=1;i<=a;i++)
	{
		sum += i;
	}

	end_t = clock();
	
	time_req = (double)(end_t-start_t)/ CLOCKS_PER_SEC;


	printf("the sum of '1' to '%d' = %d\n",a,sum);

	printf("total time = %lf \n",time_req);

}


// a=10000 time is 0.000086 