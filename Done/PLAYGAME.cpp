#include <bits/stdc++.h>
using namespace std;
int main () 
{
	unsigned long long int n;
	int t,d=0;
	scanf("%d",&t);
	while(t--) {
		scanf("%llu",&n);
		d=0;
		while(n!=0) {
			d=d+n%10;
			n=n/10;
		}
		if(d%3==0)
		{
			printf("Ragini\n");
		}
		else
			printf("Hemlata\n");
	}

	return 0;
}