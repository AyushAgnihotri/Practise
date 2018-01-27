#include <bits/stdc++.h>
using namespace std;
int main()
{
	char A[30];
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	string S;
	int t,n,len,cnt,index;
	scanf("%d",&t);
	while(t--) {
		cin>>S;
		cnt=0;
		int mn=9999999;
		memset(A,0,sizeof(A));
		len=S.length();
		for(int i=0;i<len;i++) {
			A[S[i]-'a']++;
		}
		while(1) {
			for(i=0;i<27;i++) {
				if(A[i]!=0) {
					mn=min(mn,A[i]);
					if(mn==A[i])
						index=i;
				}
			}
		}
		printf("%d\n",cnt);
		S.clear();
	}
	return 0;
}
