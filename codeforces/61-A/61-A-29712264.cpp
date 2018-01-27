#include <bits/stdc++.h>
using namespace std;
int main()
{
	string S;
	int i,len;
	char a;
	cin>>S;
	len=S.length();
	cin.ignore();
	for(i=0;i<len;i++) {
		scanf("%c",&a);
		if(a!=S[i])
			printf("1");
		else
			printf("0");
	}
	return 0;
}