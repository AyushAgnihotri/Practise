#include <bits/stdc++.h>
using namespace std;
int main ()
{
	setprecision(11);
	fixed;
	long double res,n;
	int t;
	scanf("%d",&t);
	while(t--) {
		scanf("%Lf",&n);
		res=(3.0/4.0)-(1.0/(2.0*(n+1.0)*(n+2.0)));
		printf("%0.11Lf\n",res);
	}
	return 0;
}