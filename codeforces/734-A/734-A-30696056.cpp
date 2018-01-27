#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,anton=0,danik=0;
	char c;
	scanf("%d",&n);
	while(scanf("%c",&c)!=EOF) {
		if(c=='A')
			anton++;
		if(c=='D')
			danik++;
	}
	if(anton == danik)
		printf("Friendship");
	if(anton>danik)
		printf("Anton");
	if(danik>anton)
		printf("Danik");
	return 0;
}