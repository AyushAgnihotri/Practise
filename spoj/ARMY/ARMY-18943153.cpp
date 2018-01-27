#include <bits/stdc++.h>
#define MAX 10000007
using namespace std ;
int main() 
{
	bool flag=0;
	long long int i,NG,NM,N[MAX],M[MAX];
	int t;
	char chutiap;
	scanf("%d",&t) ;
	while(t--) {
		flag=0;
		scanf("%c",&chutiap);
		scanf("%lld%lld",&NG,&NM);
		for(i=0;i<NG;i++) {
			scanf("%lld",&N[i]);
		}
	
		for(i=0;i<NM;i++) {
			scanf("%lld",&M[i]);
		}
		sort(N,N+NG);
		reverse(N,N+NG);
		sort(M,M+NM);
		reverse(M,M+NM);
		if(N[0]>=M[0])
			flag=1;
		if(flag)
			printf("Godzilla\n");
		else
			printf("MechaGodzilla\n");
	}
}