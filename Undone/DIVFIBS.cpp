#include <bits/stdc++.h>
using namespace std;
#define lli unsigned long long int
lli F[1000009];
void CreateFibonacci(lli n) {
	lli i;
	F[0]=0;
	F[1]=1;
	for(i=2;i<=n;i++) {
		F[i]=F[i-1]+F[i-2];
	}
}

lli countDivisible(lli l,lli r,lli m) {
	lli i,cnt=0;
	for(i=l;i<=r;i++) {
		if(F[i]%m==0) {
			cnt++;
		}
	}
	return cnt;
}

int main()
{
	lli t,l,r,m,cnt;
	CreateFibonacci(1000007);
	scanf("%llu",&t);
	while(t--) {
		scanf("%llu%llu%llu",&l,&r,&m);
		if(m==1) {
			cnt=r-l+1;
		}
		else if(m<=F[r]) {
			cnt=countDivisible(l,r,m);		
		}
		else {
			cnt=0;
		}
		printf("%llu\n",cnt);
	}
	return 0;
}