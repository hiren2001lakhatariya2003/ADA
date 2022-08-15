#include<stdio.h>

int main()
{
    FILE *fp;
    fp= fopen("abc.txt","r");
    int a[15],i=0;

    if(fp){
        while(fscanf(fp,"%d",&a[i])!=EOF){
            i++;
        }
        a[i]='\0';
    }
    for(i=0;a[i]!='\0';i++){
        printf("%d\n",a[i]);
    }
}