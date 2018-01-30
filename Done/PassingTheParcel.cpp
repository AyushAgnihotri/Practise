#include <bits/stdc++.h>
using namespace std;
int n;
int vis[1003];
int next_student(int curr) {
	int nxt=curr%n+1;
	while(vis[nxt]!=0) {
		nxt=(nxt)%n + 1;
	}
	return nxt;
}

int main()
{
	int i,j,len,cnt=0,curr=1;
	scanf("%d",&n);
	string s;
	cin>>s;
	len=s.length();
	for(i=0; ; i=(i+1)%len ) {
		if(s[i]=='b') {
			vis[curr]=1;
			cnt++;
			if(cnt==n-1)
				break;
		}
		curr=next_student(curr);
	}
	for(i=1;i<=n;i++) {
		if(vis[i]==0) {
			printf("%d",i);
			return 0;
		}
	}
	return 0;
}