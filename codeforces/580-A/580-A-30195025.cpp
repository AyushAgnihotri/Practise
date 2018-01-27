#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,next,prev,cnt=0,res=0;
	scanf("%d",&n);
	scanf("%d",&prev);
	n--;
	while(n--) {
		scanf("%d",&next);
		if(next<prev)
			cnt=0;
		else
			cnt++;
		res=max(res,cnt);
		prev=next;
	}
	printf("%d",res+1);

	return 0;
}