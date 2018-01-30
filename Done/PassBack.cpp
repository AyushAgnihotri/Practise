#include <bits/stdc++.h>
using namespace std;
stack<int> S;
int main()
{
	int t,id,n,a,i,b;	
	char ch;
	scanf("%d",&t);
	while(t--) {
		while(!S.empty()) {
			S.pop();
		}
		scanf("%d%d",&n,&id);
		S.push(id);
		for(i=0;i<n;i++) {
			cin>>ch;
			if(ch=='P') {
				scanf("%d",&id);
				S.push(id);
			}
			else  {
				if(!S.empty()) {
					a=S.top();
					S.pop();
					b=S.top();
					S.push(a);
					S.push(b);
				}
			}
		}
		printf("Player %d\n",S.top());
	}
	return 0;
}