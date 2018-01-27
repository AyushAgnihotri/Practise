#include <bits/stdc++.h>
using namespace std;
#define MAX 10007000
bool A[MAX],B[MAX];
void simpleSieve(long long int limit)
{
	long long int p,i;
	memset(A,true,sizeof(A));
	memset(B,true,sizeof(B));
	for(p=2;p*p<limit;p++){
		if(A[p]==true){
			for(long long int i=p*2;i<limit;i+=p){
				A[i]= false;
				B[i]= false;
			}
		}
	}
}

void check(vector<long long int> v) {
	long long int p,i;
	vector<long long int> :: iterator it;
	for(it=v.begin();it!=v.end();it++) {
		if(B[*it]==true) {
			B[*it]=false;
		}
	}
	p=2;
	while(1)
	 {
		if(B[p]==true) {
			printf("%lld\n",p);
			break;
		}
		else
			p++;
	}
	for(it=v.begin();it!=v.end();it++) {
		B[*it]=A[*it];
	}
}

int main()
{
	long long int t,n,a,p,i;
	scanf("%lld",&t);
	vector <long long int> v;
	vector <long long int> :: iterator it;
	simpleSieve(10007000);
	while(t--) {
		v.clear();
		scanf("%lld",&n);
		for(i=0;i<n;i++) {
			scanf("%lld",&a);
			v.push_back(a);
		}
		check(v);
 	}
	return 0;
}