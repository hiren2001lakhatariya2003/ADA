// WAP to print first 50 natural number 

#include <stdio.h>
#include <time.h>

int main()
{
	double time_req;
	clock_t start_t,end_t;

	start_t = clock();
	for(int i=1;i<=50;i++)
	{
		printf("%d\n",i);
	}
	end_t=clock();

	time_req = (double)(end_t - start_t)/ CLOCKS_PER_SEC;

	printf("the total time is : %lf",time_req);
}

// time is 0.000099