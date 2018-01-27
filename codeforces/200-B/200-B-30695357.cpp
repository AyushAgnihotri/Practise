#include <bits/stdc++.h>
using namespace std;
int main()
{
	int x;
	double ans=0,a;
	scanf("%d",&x);
	int n=x;
	while(n--) {
		scanf("%lf",&a);
		ans = ans+ a/100;
	}
	cout<<setprecision(12);
	cout<<fixed;
	cout<<(ans/x)*100;	
	return 0;
}