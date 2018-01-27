#include <bits/stdc++.h>
using namespace std;
int main() 
{
	int t,p,q,n,c,v,x;
	scanf("%d",&t);
	while(t--) {
		scanf("%d%d",&n,&c);
		vector<int> A(n);
		for(int i=0;i<c;i++) {
			scanf("%d",&x);
			if(x==0) {
				scanf("%d%d%d",&p,&q,&v);
				for(int j=p;j<=q;j++) {
					A[j]=A[j]+v;
				}
			}
			if(x==1) {
				long long int sum=0;
				scanf("%d%d",&p,&q);
				for(int j=p;j<=q;j++) {
					sum=sum+A[j];
				}
				printf("%lld\n",sum);	
			}
		}
	}
	return 0;
}