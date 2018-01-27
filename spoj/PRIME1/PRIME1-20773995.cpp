#include <bits/stdc++.h>
using namespace std;
bool A[100005];
vector<int> prime;
vector<int> :: iterator it;
long long int max(long long int m, long long int n) {
	if(m>n)
		return m;
	return n;
}
void simpleSieve(long long m, long long n)
{
	long long p,i,j;
	bool flag;
	
 	if(n>100005) {
 		if(m<100005) {
	 		for(i=m;i<=100005;i++)
				if(A[i]) 
					printf("%lld\n",i);
 		}
		for(j=max(m,100006);j<=n;j++) {
			flag=0;
			for(it=prime.begin();it!=prime.end();it++) {
 				if(j%(*it)==0) {
 					flag=1;
 					break;
 				}
 			}
 			if(!flag) {
 				printf("%lld\n",j);
 			}
 		}
 	}
 	else {
		for(i=m;i<=n;i++) {
			if(A[i]==1) 
				printf("%lld\n",i);
		}
	}
	printf("\n");
}
int main() {
	long long t,i,j,p,m,n;
	scanf("%lld",&t);
	memset(A, true, sizeof(A));
	A[0]=false;
	A[1]=false;
	for(p=2;p*p<=100005;p++){
		if(A[p]==true){
			for(i=p*2;i<=100005;i+=p){
				A[i]= false;
			}
		}
		
	}
	for(i=0;i<=100005;i++) {
		if(A[i])
			prime.push_back(i);
	}
	while(t--){
		scanf("%lld%lld",&m,&n);
		simpleSieve(m,n);	
	}
	return 0;
}