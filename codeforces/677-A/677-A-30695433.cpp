#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,cnt=0,a;
	scanf("%d%d",&n,&k);
	while(n--) {
		scanf("%d",&a);
		if(a>k)
			cnt+=2;
		else
			cnt++;
	}
	printf("%d",cnt);
	return 0;
}