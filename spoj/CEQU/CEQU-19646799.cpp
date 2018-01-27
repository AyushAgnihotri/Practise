#include <bits/stdc++.h>
using namespace std;
int main ()
{
	int t,a,b,c,d;
	scanf("%d",&t);
	for(int i=1;i<=t;i++) {
		scanf("%d%d%d",&a,&b,&c);
		d=__gcd(a,b);
		if(c%d!=0) {
			printf("Case %d: No\n",i);
		}
		else
			printf("Case %d: Yes\n",i);
	}
}