#include <bits/stdc++.h>
using namespace std;
int leftRotateByOne(int arr[7],int n)
{
	int tmp=arr[0];
	for(int i=0;i<n-1;i++) {
		arr[i]=arr[i+1];
	}
	arr[n-1]=tmp;
	return 0;
}

int leftRotate(int arr[7],int d,int n)
{
	for(int i=0;i<d;i++) {
		leftRotateByOne(arr,n);
	}
	return 0;
}
int printArray(int arr[7],int n)
{
	for(int i=0;i<n;i++) {
		printf("%d ",arr[i]);
	}
}
int main()
{
	int arr[7]={1,2,3,4,5,6,7};
	leftRotate(arr,2,7);
	printArray(arr,7);
	return 0;
}