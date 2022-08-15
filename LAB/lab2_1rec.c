#include<stdio.h>
#include<time.h>
int fibo(int);
int main()
{
    int n;

    clock_t start , end;

    printf("Enter the number : ");
    scanf("%d",&n);

    start=clock();
    for(int i=0;i<n;i++) {
        int ans = fibo(i);
        printf("%d ",ans);
    }
    end=clock();

    double time_req = (double)(end - start)/ CLOCKS_PER_SEC;
    printf("\nthe time required is : %lf",time_req);
    return 0;

}

int fibo(int a)
{
    if(a==0 || a==1){
        return a;
    }
    else{
        return fibo(a-1) + fibo(a-2);
    }
}

// The time is : 0.000340 sec