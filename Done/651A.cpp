#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,cnt=0;
	cin>>a>>b;
	while(min(a,b)>0) {
		if(a==b&&a==1)
			break;
		if(a<=b) {
			a++;
			b-=2;
		}
		else {
			b++;
			a-=2;
		}
		cnt++;
	}
	printf("%d",cnt);
	return 0;
}