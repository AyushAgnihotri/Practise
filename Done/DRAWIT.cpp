#include<bits/stdc++.h>
using namespace std;
#define pc putchar_unlocked
#define gc getchar_unlocked
typedef long long ll;
typedef unsigned long long llu;
#define mp make_pair
#define pb push_back
#define sc(x) scanf("%d",&x)
#define sc2(x,y) scanf("%d%d",&x,&y)
#define scstr(x) scanf("%s",x)
#define pd(x) printf("%d",x)
#define pstr(x) printf("%s",x)
#define newl() printf("\n")
#define fl(i,n) for (i=0;i<n;i++)
#define fle(i,n) for (i=1;i<=n;i++)
#define fla(i,a,n) for (i=a;i<n;i++)
#define mem(a,i) memset(a,i,sizeof(a))
#define fi first
#define se second
typedef pair<int,int> pii;
typedef pair<int,pair<int,int> > piii ;
#define wl(n) while (n--)
#define MOD 1000000007
//-------------
int in[110]={0};
int main()
{
	int t;
	sc(t);
	wl(t)
	{
		int n,k;sc2(n,k);
		int i,j;
		for (i=0;i<=n;i++)
			in[i]=0;
		for (i=0;i<k;i++)
		{
			int s,d,m;
			sc2(s,d);sc(m);
			in[s]+=m;
			in[d]+=m;
		}
		int c=0,st=1,f=0;
		for (i=1;i<=n;i++)
		{
			if (in[i]&1)
			{	c++;
				if (!f)
				{	st=i;
					f=1;
				}
			}
		}	
		if (c<=2)
		{
			printf("YES %d\n",st);
		}
		else
			printf("NO\n");
	}		
 
	return 0;
 
} 


