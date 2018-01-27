#include <bits/stdc++.h>
using namespace std;
int main()
{
	set<char> st;
	st.insert('a');
	st.insert('e');
	st.insert('i');
	st.insert('o');
	st.insert('u');
	st.insert('y');
	string s;
	cin>>s;
	int i,len=s.length();
	for(i=0;i<len;i++) {
		if(st.find(tolower(s[i]))==st.end()) {
			printf(".%c",tolower(s[i]));
		}
	}
	return 0;
}