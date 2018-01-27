#include <bits/stdc++.h>
using namespace std;
int main()
{	
	int i,start=-1,len,cnt=0;
	string s;
	bool flag=0;
	cin>>s;
	len=s.length();
	for(i=0;i<len;i++) {
		if(s[i] == '1') {
			start=i;
			break;
		}
	}
	if(start==-1) {
		flag=1;
	}
	if(!flag) {
		for(i=len-1;i>start;i--) {
			if(s[i]=='0')
				cnt++;
		}
	}
	if(cnt<6) {
		flag=1;
	}
	if(!flag) {
		printf("yes");
	}
	else {
		printf("no");
	}
	return 0;
}