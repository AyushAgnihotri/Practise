#include <bits/stdc++.h>
using namespace std;
long long int coin[10000008];

void change() {
	int i;
	coin[0]=0;
	coin[1]=1;
	coin[2]=2;
	coin[3]=3;
	for(i=4;i<=10000008;i++) {
		if(i<coin[i/2]+coin[i/3]+coin[i/4])
			coin[i]=coin[i/2]+coin[i/3]+coin[i/4];
		else
			coin[i]=i;
	}
}
long long int recur(long long int n) {
	if(n<=10000008)
		return coin[n];
	return (recur(n/2)+recur(n/3)+recur(n/4));
}

int main()
{
	long long int n;
	change();
	while(scanf("%lld",&n)!=EOF ) {
		if(n<=10000008)
			printf("%lld\n",coin[n]);
		else {
			printf("%lld\n",recur(n)>n?recur(n):n);
		}
	}
	return 0;
}