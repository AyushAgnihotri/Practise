#include <bits/stdc++.h>
using namespace std;
int main()
{
	string S;
	cin>>S;
	int i,upper=0,lower=0,len=S.length();
	for(i=0;i<len;i++) {
		if(S[i]<='z' && S[i]>= 'a')
			lower++;
		else
			upper++;
	}
	if(lower<upper) {
		for(i=0;i<len;i++)
			printf("%c",toupper(S[i]));
	}
	else
		for(i=0;i<len;i++)
			printf("%c",tolower(S[i]));
	return 0;
}