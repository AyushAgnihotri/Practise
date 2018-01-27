#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int n;
	scanf("%lld",&n);
	long long int last,last2nd;
	if(n<0) {
		n=abs(n);
		last = n%10;
		n=n/10;
		last2nd = n%10;
		n= n/10;
		last = min(last2nd,last);
		n=n*10 + last;
		n=-n;
	}
	printf("%lld",n);	
	return 0;
}