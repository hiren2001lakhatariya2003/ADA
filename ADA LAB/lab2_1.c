#include<stdio.h>
#include<time.h>
int main()
{
    int a=0;
    int b=1;
    clock_t start , end;


    int n;
    printf("Enter the number : ");
    scanf("%d",&n);

    start=clock();
    printf("%d %d",a,b);
    for(int i=2;i<n;i++){
        int c = a+b;
        a=b;
        b=c;
        printf(" %d",c);
        }
    end = clock();

   double time_req = (double)(end - start)/ CLOCKS_PER_SEC;
    printf("\nthe time required is : %lf",time_req);
    return 0;
}

// The time is 0.000018 sec