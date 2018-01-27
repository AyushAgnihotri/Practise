#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,cnt=0;
	char prev,next;
	scanf("%d",&n);
	scanf("%c",&prev);
	while(n--) {
		scanf("%c",&next);
		if(next==prev)
			cnt++;
		prev=next;
	}
	printf("%d",cnt);
	return 0;
}