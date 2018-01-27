#include <bits/stdc++.h>
using namespace std;
int main()
{
	string A,B;
	cin>>A;
	cin>>B;
	reverse(A.begin(),A.end());
	if(A==B)
		printf("YES");
	else
		printf("NO");
}