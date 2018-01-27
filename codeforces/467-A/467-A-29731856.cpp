#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,a,b,cnt=0;
	scanf("%d",&n);
	while(n--) {
		scanf("%d%d",&a,&b);
		if(b-a>=2)
			cnt++;
	}
	printf("%d",cnt);
	return 0;
}