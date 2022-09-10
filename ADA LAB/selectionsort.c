#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

void main(){
	long int i,j,minx,minj,temp=0,n,data[100000];
	
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
	for (i=0;i<=n-1;i++)	
	{
		minj = i;
		minx = data[i];
		for (j=i+1;j<n;j++)
		{
			if(data[j] < minx)
			{
				minj = j;
				minx = data[j];
			}
		}
		data[minj]=data[i];
		data[i]=minx;
		
	}
	end=clock();
	for(i=0;i<n;i++)
	{
		printf("%d ",data[i]);
	}
	totaltime=((double)(end-start))/CLOCKS_PER_SEC;
    printf("\n Total time = %lf \n",totaltime);
}
