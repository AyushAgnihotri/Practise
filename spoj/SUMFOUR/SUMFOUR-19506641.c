#include <bits/stdc++.h>
using namespace std;

vector <long long> A,B,C,D,AB,CD;
vector<long long> :: iterator it1,it2;
long long cnt,n,i,j,a,b,c,d,size;
pair <vector<long long> :: iterator,vector<long long> :: iterator> ranges;


int main ()
{
	scanf("%lld",&n);
	for(i=0;i<n;i++) {
			scanf("%lld%lld%lld%lld",&a,&b,&c,&d);
			A.push_back(a);
			B.push_back(b);
			C.push_back(c);
			D.push_back(d);
	}

	for(it1=A.begin();it1!=A.end();it1++) {
		for(it2=B.begin();it2!=B.end();it2++) {
			AB.push_back((*it1) + (*it2));
		}
	}
	A.clear();
	B.clear();

	for(it1=C.begin();it1!=C.end();it1++) {
		for(it2=D.begin();it2!=D.end();it2++) {
			CD.push_back(-((*it1) + (*it2)));
		}
	}

	C.clear();
	D.clear();

	sort(AB.begin(),AB.end());
	sort(CD.begin(),CD.end());

	for(it1=AB.begin();it1!=AB.end();it1++) {
		ranges=equal_range(CD.begin(),CD.end(),*it1);
		if(ranges.first!=CD.end()) {
			cnt=cnt+(ranges.second-ranges.first);
		}
	}
	printf("%lld",cnt);
}
