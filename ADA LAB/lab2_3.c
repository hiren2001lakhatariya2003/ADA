#include<stdio.h>
#include <stdio.h>

int main()
{
    int n;
    int rem;
    int sum=0;
    clock_t start_t,end_t;
	double time_req;
	start_t = clock();
    printf("Enter the number :");
    scanf("%d",&n);


    while(n!=0)
    {
        rem = n % 10;
        sum += rem;
        n = n/10;
    }
    printf("%d",sum);
}