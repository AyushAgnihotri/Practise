#include <bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
	if(a==0)
		return b;
	else 
		return (b%a,a);
}

int juggingAlgo(int arr[12],int d,int n)
{
	int hcf=gcd(d,n);
	for(int i=0;i<n/hcf;i++) {
		int temp = arr[i];
		for(int j=0;j<n-n/hcf;j+=n/hcf) {
			arr[i+j]=arr[i+j+d];
		}
		arr[i+n-hcf+1]=temp;
	}
}

int printArray(int arr[7],int n)
{
	for(int i=0;i<n;i++) {
		printf("%d ",arr[i]);
	}
}
int main()
{
	int arr[12]={1,2,3,4,5,6,7,8,9,10,11,12};
	juggingAlgo(arr,3,12);
	printArray(arr,12);
	return 0;
}


