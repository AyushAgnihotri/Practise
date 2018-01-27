#include <bits/stdc++.h>
using namespace std;
using namespace std;
int main()
{
    int n,v,c;
    queue<int> Q;
    stack<int> S;
        
	scanf("%d",&n);    
    while(n){
        for(int i=0;i<n;i++){
            scanf("%d",&v);
            Q.push(v);
        }
        c=1;
        while(!Q.empty()||!S.empty()) {
            if(!Q.empty()&&Q.front()==c) {
                Q.pop();
                c++;
            }
            else{
                if(!S.empty()&&S.top()==c){
                    S.pop();
                    c++;
                }
                else{
                    if(!Q.empty()){
                        int s=Q.front();
                        S.push(s);
                        Q.pop();
                    }
                    else
                        break;
                }
            }
        }
        if(c==n+1)
        	printf("yes\n");
        else
        	printf("no\n");
        scanf("%d",&n);
    }
    return 0;
}