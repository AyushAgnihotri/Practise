#include <bits/stdc++.h>
using namespace std;
int t,r,c,vis[105][105];
char grid[105][105];
pair<int,int> src,dest,u,v;
string str="ALLIZZWELL";

int dfs(int x,int y,int cnt) 
{
	bool flag=0;
	vis[x][y]=1;
	if(cnt==9)
		return 1;
	else if(x == r+1 || y== c+1 || x==0 || y==0)
		return 0;
	if(grid[x+1][y]==str[cnt+1] && !vis[x+1][y]) 
		flag = (flag || dfs(x+1,y,cnt+1));
	if(grid[x][y+1]==str[cnt+1] && !vis[x][y+1]) 
		flag = (flag || dfs(x,y+1,cnt+1));
	if(grid[x-1][y]==str[cnt+1] && !vis[x-1][y]) 
		flag = (flag || dfs(x-1,y,cnt+1));
	if(grid[x][y-1]==str[cnt+1] && !vis[x][y-1]) 
		flag = (flag || dfs(x,y-1,cnt+1));
	if(grid[x+1][y+1]==str[cnt+1] && !vis[x+1][y+1]) 
		flag = (flag || dfs(x+1,y+1,cnt+1));
	if(grid[x-1][y-1]==str[cnt+1] && !vis[x-1][y-1]) 
		flag = (flag || dfs(x-1,y-1,cnt+1));
	if(grid[x+1][y-1]==str[cnt+1] && !vis[x+1][y-1]) 
		flag = (flag || dfs(x+1,y-1,cnt+1));
	if(grid[x-1][y+1]==str[cnt+1] && !vis[x-1][y+1]) 
		flag = (flag || dfs(x-1,y+1,cnt+1));
	if(!flag)
		vis[x][y] = 0;
	return flag;
}

int main()
{
	int i,j;
	bool flag;
	scanf("%d",&t);
	while(t--) {
		flag=0;
		memset(vis,0,sizeof(vis));
		scanf("%d%d",&r,&c);
		for(i=1;i<=r;i++)
			scanf("%s",grid[i]+1);
		
		for(i=1;i<=r;i++) {
			for(j=1;j<=c;j++) {
				if(grid[i][j]=='A' && flag==0) {
					flag=dfs(i,j,0);
				}
			}
			if(flag) {
				printf("YES\n");
				break;
			}
		}
		if(!flag)
			printf("NO\n"); 
	}
	return 0;
}