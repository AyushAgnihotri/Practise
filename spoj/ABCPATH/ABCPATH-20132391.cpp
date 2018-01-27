#include <bits/stdc++.h>
using namespace std;
stack< pair<int,int> > s;
int dis[55][55];
char adj[55][55];
vector< pair<int,int> > v;
int main()
{
	int i,H,W,x=0,y=0,x_new,y_new,n,res=0,cnt=0,k=0,sz=0;
	int mov_x[8]={0,1,0,-1,-1,1,1,-1};
	int mov_y[8]={1,0,-1,0,-1,1,-1,1};
	scanf("%d%d",&H,&W);
	while(H!=0 && W!=0) {
		x=0;
		y=0;
		res=0;
		k++;
		for(i=1;i<=H;i++) {
			for(int j=1;j<=W;j++) {
				cin>>adj[i][j];
				if(adj[i][j]=='A') {
					v.push_back(make_pair(i,j));
					x++;
				}
			}
		}
		if(x==0) {
			res=0;
		}
		else {
			sz=v.size();
			for(i=0;i<sz;i++) {
				memset(dis,0,sizeof(dis));
				x=v[i].first;
				y=v[i].second;
				s.push(make_pair(x,y));
				dis[x][y]=1;
				res=max(res,dis[x][y]);
				while(!s.empty()) {
					x=s.top().first;
					y=s.top().second;
					s.pop();
					for(int j=0;j<8;j++) {
						x_new=x+mov_x[j];
						y_new=y+mov_y[j];
						if(x_new>=1 && x_new<=H &&y_new>=1 && y_new <=W && adj[x_new][y_new]==adj[x][y]+1 && dis[x_new][y_new]==0) {	
							s.push(make_pair(x_new,y_new));
							dis[x_new][y_new]=dis[x][y] + 1;
						}
						res=max(res,dis[x_new][y_new]);
					}
				}
			}	
		}
		printf("Case %d: %d\n",k,res);
		v.clear();
		scanf("%d%d",&H,&W);	
	}
	return 0;
}