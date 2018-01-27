# include <bits/stdc++.h>
using namespace std;
# define MAX 10007
string S;
char A[MAX];
int main () {
	char *pch;
	set <string> st;
	set <string> ::iterator it;
	int t,sz,len;
	scanf("%d",&t);
	cin.ignore();
	while(t--) {	
	getline(cin,S);
		len=S.size();
		memset(A,0,sizeof(A));
		for(int i=0;i<len;i++) {
			A[i]=S[i];
		}
		pch = strtok(A," ");
		while(pch != NULL) {
			st.insert(pch);
			pch = strtok(NULL," ");
		}
		sz=st.size();
		printf("%d\n",sz);
		st.clear();
	}
	return 0;
}