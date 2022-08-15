// WAP to find the power of number

#include <stdio.h>
#include <time.h>

int main()
{
	int number,power;
	int ans = 1;

	printf("Number :");
	scanf("%d",&number);
	printf("Power : ");
	scanf("%d",&power);

	double time_req;
	clock_t start_t,end_t;

	start_t = clock();


	for(int i=0;i<power;i++){
		ans = ans * number;
	}

	end_t = clock();
	time_req = (double)(end_t - start_t)/ CLOCKS_PER_SEC;
	
	printf("%d \n",ans );
	printf("the total time is : %lf",time_req);

}

// number=20 power=10  time is 0.000010