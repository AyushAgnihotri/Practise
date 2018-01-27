#include <bits/stdc++.h>
using namespace std;
int main ()
{
	int t,b;
	long long n;
	scanf("%d",&t);
	while(t--){
		scanf("%lld%d",&n,&b);
		if(b==0)
			printf("Airborne wins.\n");
		else
			printf("Pagfloyd wins.\n");
	}

 return 0;
}