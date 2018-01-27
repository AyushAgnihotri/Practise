#include <bits/stdc++.h>
using namespace std;
int main()
{
	bool flag=0;
	int cnt=0;
	char prev,next;
	scanf("%c",&prev);
	while(scanf("%c",&next)!=EOF) {
		if(next==prev) {
			cnt++;
		}
		else
			cnt=0;
		if(cnt>=6) {
			flag=1;
			break;
		}
		prev=next;
	}
	if(flag) 
		printf("YES");
	else
		printf("NO");
	return 0;
}