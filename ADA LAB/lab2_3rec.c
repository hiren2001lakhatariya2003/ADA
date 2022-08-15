#include<stdio.h>
int digit(int);
int main()
{
    int n;
    printf("Enter the number :");
    scanf("%d",&n);

    int c = digit(n);
    printf("%d",c);

    
}

int digit(int a)
{
    if(a==0)
    {
        return 0;
    }
    else
    {
        return (a%10 + digit(a/10));
    }

}
    
