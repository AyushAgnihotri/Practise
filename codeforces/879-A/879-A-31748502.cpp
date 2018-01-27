#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,s,d,res=0,prev=-1 ;
	scanf("%d",&n);
	while(n--) {
		scanf("%d%d",&s,&d);
		while(s<=prev&&prev!=-1) {
			s=s+d;
		}
		res=max(res,s);
		prev=s;
	}
	printf("%d",res);
	return 0;
}