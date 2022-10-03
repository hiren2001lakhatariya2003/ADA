#include <stdio.h>

int binarysearch(int[],int,int,int);

int main()
{
	int number, i , position,key;
	int list[100],low,high;

	printf("Enter the size of array:");
	scanf("%d",&number);

	printf("Enter the elements in array\n");

	for (i = 0; i < number; ++i)
	{
		scanf("%d",&list[i]);
	}

	for (i = 0; i< number-1;i++)
	{
		if (list[i]>list[i+1])
		{
			printf("given array is not sorted.");
			return -1;
		}
		else
		{
			printf("given array is sorted.");
			return 0;
		}

	}
	low = 0;
	high = number-1;
	printf("Enter the element for serach in array : ");
	scanf ("%d",&key);
	position = binarysearch(list,key,low,high);
	if (position !=1)
	{
		printf("\n Number present at %d",(position +1));
	}
	else{
		printf("\n this number is not present i array");
	}

}

int binarysearch(int a[],int x,int low,int high)
{
	int mid;
	if(low>high){
		return -1;
	}
	mid = (low+high)/2;

	if (x==a[mid])
	{
		return (mid);
	}
	else if (x<a[mid])
	{
		binarysearch(a,x,low,mid-1);
	}
	else{
		binarysearch(a,x,mid+1,high);
	}
	return 0;
}