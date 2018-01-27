#include <bits/stdc++.h>
using namespace std;
int main () 
{
	int n,count=0;
	while (scanf("%d",&n) && n!=0) {
		count=0;
		while(n!=0) {
			count++;
			n=n>>1;
		}
		printf("%d\n",count-1);
	}
	return -0;
}
