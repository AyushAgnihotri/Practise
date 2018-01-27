#include <bits/stdc++.h>
using namespace std;
struct edge {
    int w;
    int u;
    int v;
};
struct edge st[300005];
int p[101000];
int t,cost,n,m;
map<string,int> mp;
void makeset(int n)
    {
    for(int i = 1;i <= n;i++)
          p[i] = i;
}
int find_par(int x)
    {
    if(p[x] == x)
        return x;
    p[x] = find_par(p[x]);
    return p[x];
}
void uni(int x,int y)
    {
    int px = find_par(x);
    int py = find_par(y);
    if(px != py) {
        p[px] = py;
    }
}
int cmp(struct edge a,struct edge b)
    {
    if(a.w < b.w)
         return 1;
    else
        return 0;
}
int main() {
		char A[50];
        int ne,ans,m;
        scanf("%d",&t);
	    while(t--) {
	    	ans=0;
	    	m=0;
	        scanf("%d",&n);
	        for(int i=1;i<=n;i++) {	
	        	cin>>A;
	        	mp.insert(make_pair(A,i));
	        	scanf("%d",&ne);
		        for(int j=m+1;j<=m+ne;j++) {
		        	st[j].u=i;
		            scanf("%d%d",&(st[j].v),&(st[j].w));
		        }
		        m=m+ne;
	        }
	        makeset(n);
		    sort(st+1,st+m+1,cmp);
		    for(int i =1;i <= m;i++) {
			    if(find_par(st[i].u) != find_par(st[i].v)) {
			        ans += st[i].w;
		            uni(st[i].u,st[i].v);
		       	}
		    }
	        printf("%d\n",ans);
 		}
}