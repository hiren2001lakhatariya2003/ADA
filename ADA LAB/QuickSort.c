#include<stdio.h>
#include<conio.h>
int pivot(int array[],int i,int j){
	int p=array[i],temp;
	int k=i;
	int l=j+1;
	do{
		k++;
	}while (array[k]<=p && k<j);
	
	do{
		l--;
	}while (array[l]>p);
	
	while(k<l){
		temp=array[k];
		array[k]=array[l];
		array[l]=temp;
		do{
			k++;
		}while(array[k]<=p);
		
		do{
			l--;
		}while(array[l]>p);
	}
	
	temp=array[i];
	array[i]=array[l];
	array[l]=temp;
	return l;
}

void quickSort(int array[],int i,int j){
	if(i<j){
		int position = pivot(array,i,j);
		quickSort(array,i,position-1);
		quickSort(array,position+1,j);
	}
}

void main(){
	int array[]={65,77,5,25,32,45,99,83,69,81};
	int n=10;
	int i;
	quickSort(array,0,n-1);
	
	for(i=0;i<n;i++){
		printf("%d\t",array[i]);
	}
}
