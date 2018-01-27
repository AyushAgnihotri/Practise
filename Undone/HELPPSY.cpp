#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector <int> v[1000005];
int d[1000005];
int vis[1000005];
int arr[1005][1005];
int val[1005][1005];
set <int> pg;
int bfs(int sr,int des,int n)
{
    int i,t;
    queue <int> q;
    for(i=1;i<=n;i++)
    {
        vis[i]=0;
        d[i]=1e9;
    }
    vis[sr]=0;
    q.push(sr);
    d[sr]=0;
    while(!q.empty())
    {
        t=q.front();
        q.pop();
        for(i=0;i<v[t].size();i++)
        {
            if(!vis[v[t][i]])
            {
                vis[v[t][i]]=1;
                d[v[t][i]]=d[t]+1;
                q.push(v[t][i]);
            }
        }
    }
    if(d[des]==1e9)
    {
        return -1;
    }
    else
    {
        return d[des];
    }
}
int main()
{
    int t,i,j,m,n,k,p,x1,y1,x2,y2,sr,des;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        k=0;
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=m;j++)
            {
                val[i][j]=++k;
            }
        }
        cin>>x1>>y1>>x2>>y2;
        sr=val[x1][y1];
        des=val[x2][y2];
        cin>>p;
        while(p--)
        {
            cin>>x1>>y1;
            pg.insert(val[x1][y1]);
        }
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=m;j++)
            {
                if(pg.find(val[i][j])==pg.end())
                {
                    if((i-1)>=1&&pg.find(val[i-1][j])==pg.end())
                    {
                        v[val[i][j]].push_back(val[i-1][j]);    
                    }
                    if((i+1)<=n&&pg.find(val[i+1][j])==pg.end())
                    {
                        v[val[i][j]].push_back(val[i+1][j]);    
                    }
                    if((j-1)>=1&&pg.find(val[i][j-1])==pg.end())
                    {
                        v[val[i][j]].push_back(val[i][j-1]);    
                    }
                    if((j+1)<=m&&pg.find(val[i][j+1])==pg.end())
                    {
                        v[val[i][j]].push_back(val[i][j+1]);    
                    }
                }
            }
        }
        cout<<bfs(sr,des,k)<<endl;
        for(i=1;i<=k;i++)
        {
            v[i].clear();
        }
        pg.clear();
    }
    return 0;
}