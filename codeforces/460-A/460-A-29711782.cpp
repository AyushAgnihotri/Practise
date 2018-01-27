#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	if(m>n) {
		printf("%d",n);
	}
	else if(m==n) {
		printf("%d",n+1);
	}
	else {
		int i=1;
		while(n-(i*m)>=0) {
			n++;
			i++;
		}
		printf("%d",n);
	}
	return 0;
}