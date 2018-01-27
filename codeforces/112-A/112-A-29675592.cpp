#include <bits/stdc++.h>
using namespace std;
int main()
{
	string A,B;
	int len;
	cin>>A;
	len=A.length();
	cin>>B;
	for(int i=0;i<len;i++) {
		A[i]=tolower(A[i]);
	}

	for(int i=0;i<len;i++) {
		B[i]=tolower(B[i]);
	}
	if(A<B)
		printf("-1");
	else if(B<A)
		printf("1");
	else
		printf("0");
	return 0;
}