#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

void main(){
	long int i,j,x,temp=0,n,data[100000];
	
	clock_t start,end;
    double totaltime;
	
	FILE *p;
	char fname[10];
	printf("Enter file name : ");
	gets(fname);
	
	printf("Enter the number of elements to be sorted : ");
	scanf("%d",&n);
	printf("\n");
	
	p=fopen(fname,"r");	
	
	for(i=0 ;i<n;i++)
	{
		fscanf(p,"%ld",&data[i]);	
	}	
	
	start=clock();
	for (i=1;i<=n-1;i++)	
	{
		x=data[i];
		j=i-1;
		while(x<data[j] && j>-1)
		{
			data[j+1]=data[j];
			j-=1;
		}
		data[j+1]=x;
	}

	end=clock();
	for(i=0;i<n;i++)
	{
		printf("%d ",data[i]);
	}
	totaltime=((double)(end-start))/CLOCKS_PER_SEC;
    printf("\n Total time = %lf \n",totaltime);
}
