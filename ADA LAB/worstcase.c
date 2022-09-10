#include<stdio.h>
#include<stdlib.h>

void main()
{
	FILE *fptr;
	long int i,number;
	
	fptr=fopen("worst.txt","w");
	printf("Enter the number:\n");
	scanf("%ld",&number);
	
	for(i=number;i>0;i--)
	{
		fprintf(fptr,"%d\n",i);
	}
	fclose(fptr);
}
