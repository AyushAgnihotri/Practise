#include <bits/stdc++.h>
using namespace std;
int main()
{
	bool flag=0;
	char a;
	while(scanf("%c",&a)!=EOF) {
		if(a=='H'||a=='Q'||a=='9') {
			printf("YES");
			flag=1;
			break;
		}
	}
	if(!flag)
		printf("NO");
	return 0;
}