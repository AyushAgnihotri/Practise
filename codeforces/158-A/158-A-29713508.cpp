#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,i,a,final=0,cnt=0;
	scanf("%d%d",&n,&k);
	for(i=1;i<=n;i++) {
		scanf("%d",&a);
		if(i==k)
			final=a;
		if(a>0&&a>=final)
			cnt++;
	}
	printf("%d",cnt);
 	return 0;	
}