#include <bits/stdc++.h>
using namespace std;
vector <int> v;
int main ()
{
	int n,i,a,a_prev=9999999;
	scanf("%d",&n);
	bool flag=0;
	for(i=0;i<n;i++) {
		scanf("%d",&a);
		v.push_back(a);
		if(a_prev==a) {
			flag=1;
		}
		a_prev=a;
	}
	if(flag==0) {
		for(i=0;i<n;i++) {
			if(v[i+1]>v[i]) {
				a=i+1;
				break;
			}
		}
		for(i=a;i<n-1;i++) {
			if(v[i+1]<v[i]) {
				flag=1;
				break;
			}
		}
	}
	if(flag)
		printf("No\n");
	else
		printf("Yes\n");
	return 0;
}