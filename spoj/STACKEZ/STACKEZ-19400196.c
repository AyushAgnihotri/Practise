#include <bits/stdc++.h>
using namespace std;
int main ()
{
	stack<int> mystack;
	long long int t,a,b;
	scanf("%d",&t);
	while(t--) {
		scanf("%d",&a);
		if(a==1){
			scanf("%d",&b);
			mystack.push(b);
		}
		if(a==2){
			if(!mystack.empty())
				mystack.pop();
				
		}
		if(a==3){
			if(!mystack.empty()) {
				b=mystack.top();
				printf("%lld\n",b);
			}
			else
				printf("Empty!\n");
		}
		
	}
	
}