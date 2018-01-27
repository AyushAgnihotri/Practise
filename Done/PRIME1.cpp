#include <bits/stdc++.h>
using namespace std;
void simpleSieve(long m,long n)
{
	long p,i;
	bool A[n+1];
	for(p=2;p*p<=n;p++){
		if(A[p]==true){
			for(int i=p*2;i<=n;i+=p){
				A[i]= false;
			}
		}
	}

	for(p =m;p<=n;p++)
		{if(A[p]) 
			{cout<<p<<endl;}
	}cout<<endl;
}
int main() {
	long m,n;
	int t;
	cin>>t;
	while(t--){
		cin>>m>>n;
		simpleSieve(m,n);	
	}
	
	return 0;
}