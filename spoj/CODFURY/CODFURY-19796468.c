#include<bits/stdc++.h>
using namespace std;
int A[50001];
int main() {
	int t;
	int n,p=0,steps=0,minsteps=0;
	long long int b,sum=0,minpeople=1000001;
	scanf("%d",&t);
	while(t--)
	{
		p=0;
		steps=0;
		minsteps=0;
		sum=0;
		minpeople=1000001;
		scanf("%d%lld",&n,&b);
		for(int i=0;i<n;i++){
			scanf("%d",&A[i]);
		}
		for(int i=0;i<n;i++)
		{
			if(sum+A[i]<=b)
			{
				sum+=A[i];
				steps++;
			}
			else
			{
				sum+=A[i];
				steps++;
				while(sum>b)
				{
					sum-=A[p];
					steps--;
					p++;
				}
			}
			if(minsteps<steps)
			{
				minsteps=steps;
				minpeople=sum;
			}
			else if(minsteps==steps)
			{
				if(minpeople>sum)
				{
					minpeople=sum;
				}
			}
		}
		printf("%lld %d\n",minpeople,minsteps);
	}
	return 0;
}