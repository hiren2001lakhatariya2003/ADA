#include<stdio.h>
#include<stdlib.h>

void main()
{
	FILE *fptr;
	long int i,number;
	
	fptr=fopen("best.txt","w");
	printf("Enter the number:\n");
	scanf("%ld",&number);
	
	for(i=1;i<=number;i++)
	{
		fprintf(fptr,"%d\n",i);
	}
	fclose(fptr);
}
