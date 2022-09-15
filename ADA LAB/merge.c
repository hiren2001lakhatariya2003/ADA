#include<stdio.h>
void disp();
void msortdiv(int,int);
void mergersort(int,int,int);
int a[8]={9,7,34,7,4,32,8,4},n=8;

void main(){
	
	printf("\nbefore sort:");
	disp();
	
	msortdiv(0,n-1);
	
	printf("\nafter sort:");
	disp();
}

void disp(){
	int i;
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}

void mergesort(int l,int m,int h){
	int t[50],i,j,k;
	i=l,j=m+1,k=l;
	
	while((i<=m)&&(j<=h)){
		if(a[i]>=a[j]){
			t[k++]=a[j++];
		}
		else{
			t[k++]=a[i++];
		}
	}
	
	while(i<=m){
		t[k++]=a[i++];
	}
	while(j<=h){
		t[k++]=a[j++];
	}
	
	for(i=l;i<=h;i++){
		a[i]=t[i];
	}
}

void msortdiv(int l,int h){
	int m;
	if(l!=h){
		m=((l+h)/2);
		msortdiv(l,m);
		msortdiv(m+1,h);
		mergesort(l,m,h);
	}
	
}
