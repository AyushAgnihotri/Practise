#include <bits/stdc++.h>
using namespace std;
int leftRotate(int arr[7],int d,int n)
{
	int temp[7];
	for(int i=0;i<d;i++) {
		temp[i]=arr[i];
	}
	for(int i=d;i<n;i++) {
		arr[i-d]=arr[i];
	}
	for(int i=n-d;i<n;i++) {
		arr[i]=temp[i-n+d];
	}
	return 0;
}
int printArray(int arr[7],int n)
{
	for (int i=0;i<n;i++) {
		printf("%d ",arr[i]);
	}
	return 0;
}
int main()
{
	int arr[7]={1,2,3,4,5,6,7};
	int i;
	leftRotate(arr,2,7);
	printArray(arr,7);
	getchar();
	return 0;
}