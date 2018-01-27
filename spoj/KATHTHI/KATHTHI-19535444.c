#include <bits/stdc++.h>
using namespace std;
#define MAX 10000
vector<char> A[MAX];
int dist[MAX][MAX];
int r,c;
int dx[4]={0,1,0,-1};
int dy[4]={1,0,-1,0};
deque < pair<int,int> > Q;

bool check_bound(pair<int,int> p){
	if(p.first>= 0 && p.first < r && p.second >= 0 && p.second < c) 
		return 1;
	else 
		return 0;
}

void kaththi () {
	int i;
	pair<int,int> u,v;

	Q.push_back(make_pair(0,0));
	dist[0][0]=0;
	
	while(!Q.empty()) {
		u=Q.front();
		Q.pop_front();

		for(i=0;i<4;i++) {
			
			int x=u.first + dx[i];
			int y=u.second + dy[i];
			
			v=make_pair(x,y);
			
			if(check_bound(v) && (abs(v.first-u.first)+abs(v.second-u.second))==1 ) {
				if((A[v.first][v.second] == A[u.first][u.second]) && (dist[v.first][v.second] > dist[u.first][u.second]+0)) {
					dist[v.first][v.second] = dist[u.first][u.second]+0;
					Q.push_front(v);
				}
				else {
					if((A[v.first][v.second] != A[u.first][u.second]) && (dist[v.first][v.second] > dist[u.first][u.second]+1)) {
						dist[v.first][v.second] = dist[u.first][u.second] + 1;
						Q.push_back(v);
					}	
				}
			}
		}
	}
}

int main ()
{
	int t,i,j,cnt=0;	
	char a;
	scanf("%d",&t);
	while(t--) {
		cnt=0;
		scanf("%d%d",&r,&c);
		for(i=0;i<r;i++) {
			for(j=0;j<c;j++) {
				cin>>a;
				A[i].push_back(a);
				dist[i][j]=INT_MAX;
			}
		}
		kaththi();
		cnt=dist[r-1][c-1];
		printf("%d\n",cnt);

		for(i=0;i<r;i++) {
			A[i].clear();
		}
	}
}


