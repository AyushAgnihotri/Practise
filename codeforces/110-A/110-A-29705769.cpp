#include <bits/stdc++.h>
using namespace std;
int main()
{
	bool flag=0;
	char a;
	int cnt=0;
	while(scanf("%c",&a)!=EOF) {
		if(a=='4'||a=='7') {
			cnt++;
		}
	}
	if(cnt!=0) {
		while(cnt!=0) {
			if(cnt%10==4 || cnt%10==7)
				cnt=cnt/10;
			else{
				flag=1;
				break;
			}
		}	
	}
	else 
		flag=1;
	if(flag)
		printf("NO");
	else
		printf("YES");
	return 0;
}