#include <bits/stdc++.h>
using namespace std;
int main()
{		

	long long int a,c,t;
	stack <int> calc;
	char b;
	scanf("%lld",&t);
	while(t--)	{	
		cin>>a;
		calc.push(a);
		cin>>b;
		while(b!='=') {
			scanf("%lld",&c);
			if(b=='+') {
				a=calc.top();
				calc.pop();
				calc.push(a+c);
			}
			if(b=='-') {
				a=calc.top();
				calc.pop();
				calc.push(a-c);
			}
			if(b=='/') {
				a=calc.top();
				calc.pop();
				calc.push(a/c);
			}
			if(b=='*') {
				a=calc.top();
				calc.pop();
				calc.push(a*c);
			}	
			cin>>b;
		}
		printf("%lld\n",calc.top());
		calc.pop();
	}
	return 0;
}