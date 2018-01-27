#include <bits/stdc++.h>
using namespace std;
int main ()
{
    long long m,n,a,res,r,c;
    cin>>m>>n>>a;
    if((m%a)==0)   {
        c = (m/a);
        if((n%a)==0) {
            r = (n/a);
        }
        else {
            r = (n/a)+1;
        }
        res = r*c;
        
    }
    else {
        c=(m/a)+1;
        if((n%a)==0) {
            r = (n/a);
        }
        else {
            r = (n/a)+1;
        }
        res = r*c;
    }
        cout<<res;
        return 0;
        
    
}