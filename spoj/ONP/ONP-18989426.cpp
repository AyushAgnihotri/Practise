#include <bits/stdc++.h>
using namespace std;
int main() {
 int t, i;
 string s;
 stack <char> oper;
 stack <char> extra;
 scanf("%d",&t);
 while(t--) {
  cin>>s;
  for(i=0; i<s.size(); i++) {
   if(s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/' || s[i]=='^' || s[i]=='%')
		oper.push(s[i]);
   else if(s[i]==')') {
    cout<<oper.top();
    oper.pop();
   }
   else if(s[i]=='(') extra.push(s[i]);
   else cout<<s[i];
  }
  cout<<endl;
 }
 return 0;
}
