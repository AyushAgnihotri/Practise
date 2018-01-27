#include <stdio.h>
#define MAX 100000
int arr[MAX];
int heapsize;
int parent(int i)
{
	return i/2;
}

int left (int i)
{
	return 2*i;
}

int right(int i)
{
	return (2*i)+1;
}

void swap (int *a, int *b) 
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}



void maxheapify (int arr[], int i)
{
	int larg;
	int l=left(i);
	int r=right(i);
	if(l<heapsize && A[l]>A[i])
		larg = l;
	else
		larg=i; 
	if(r<heapsize && A[r]>A[larg])
		larg = r;

	if(larg!=i) {
		swap(A[i],A[larg])
		maxheapify(arr,larg);
	}
}


void buildheap(int arr[]) {
	for(int i=size/2;i>=0 ; i--) {
		maxheapify(arr,i);
	}
}

void heapsort(int arr)
{
	
}

int main()
{
	return 0;
}