#include <stdio.h>

int binarysearch(int[],int,int,int)

void main()
{
	int number, i , position,key;
	int list[100],low,high;

	printf("Enter the size of array:")
	scanf("%d",&number)

	printf("Enter the elements in array")

	for (i = 0; i < number; ++i)
	{
		scanf("%d",&list[i]);
	}

	for (i = 0; i< number-1;i++)
	{
		if (list[i]>list[i+1])
		{
			printf("given array is not sorted");
			return -1;
		}

	}