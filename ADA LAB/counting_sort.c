#include <stdio.h>
// Counting Sort function
void counting_sort(int a[],int k,int n)
{
	int i,j;
	int b[n],c[k+1];
	// initializing counting array c[i] to 0
	for(i=0;i<=k;i++)
		c[i]=0;
	//store count of each element in array C
	for(j=0;j<n;j++)
		c[a[j]] =
}