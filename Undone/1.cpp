#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k,q,z;
    scanf("%d%d%d",&n,&k,&q);
    vector<int> a;
    vector<int> :: iterator it;
    for(int a_i = 0;a_i < n;a_i++){
       scanf("%d",&z);
        a.push_back(z);
    }
    k=k%n;
    for(int i=0;i<k;i++) {
         std::rotate(a.rbegin(), a.rbegin() + 1, a.rend());
    }
  
    for(int i=0;i<q;i++) {
        scanf("%d",&z);
        cout<<a[z]<<endl;    
    }
    return 0;
}
