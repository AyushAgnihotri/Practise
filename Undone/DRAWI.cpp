#include<bits/stdc++.h>
using namespace std;
 
#define test() int t;scanf("%d",&t);for(int tno=1;tno<=t;tno++)
 
#define mp make_pair
#define pb push_back
#define fl(i,a,b) for(i=a;i<=b;i++)
#define rfl(i,b,a) for(i=b;i>=a;i--)
#define wl(n) while(n--)
#define X first
#define Y second
#define all(c) c.begin(),c.end() //eg sort(all(v));
 
#define tr(c, itr) for(itr = (c).begin(); itr != (c).end(); itr++)
#define present(container, element) (container.find(element) != container.end()) //for set,map,etc
#define cpresent(container, element) (find(all(container),element) != container.end()) //for vectors
 
typedef long long ll;
typedef double lf;
typedef vector<int> vi; 
typedef vector< vi > vvi; 
typedef pair<int,int> pii;
typedef pair<int,pair<int,int> > piii ;
 
#define sz(a) int((a).size())
#define clr(a) memset(a,0,sizeof(a))
#define ini(a) memset(a,-1,sizeof(a))
 
 
// Input Output
#define sc(n) scanf("%d",&n)
#define sc2(n,m) sc(n), sc(m)
#define scs(s) scanf("%s",s);
#define pd(n) printf("%d",n)
#define pd2(n,m) printf("%d %d",n,m)
#define scc(n) scanf("%c",&n)
#define infile() freopen("input.txt","r",stdin);
#define output() freopen("output.txt","w",stdout);
 
#define scl(n) scanf("%lld",&n)
#define scl2(n,m) scanf("%lld%lld",&n,&m)
#define pdl(n) printf("%lld",n)
#define pdl2(n,m) printf("%lld %lld",n,m)
#define newln printf("\n")
#define space printf(" ")
 
//Bitwise
#define chkbit(s, b)    (s & ((lli)1<<b))
#define setbit(s, b)    (s |= ((lli)1<<b))
#define clrbit(s, b)    (s &= ~(1<<b))
 
//cost
#define MOD 1000000007
#define MOD_INV 1000000006
#define MAX 100009
#define INF ((1LL<<62)-1)
 
//Error check
#define debug() printf("here\n")
#define PV(v)               { for(int i=0;i<v.size();i++) printf("%d ",v[i]);printf("\n"); }
#define PA(a,st,ed)     { for(int i=st;i<=ed;i++) printf("%d ",a[i]);printf("\n"); }  
#define chk(a) cerr << endl << #a << " : " << a << endl
#define chk2(a,b) cerr << endl << #a << " : " << a << "\t" << #b << " : " << b << endl
 
ll pw(ll base ,ll expo,ll c)
{
        if(expo == 0 )
        return  1 ; 
        ll f = pw(base , expo /2,c) ; 
        if(expo&1)
        return (((f*f)%c)*base)%c ; 
        return (f*f)%c;
}
//-----------------------------------------------------------------------------------------------
 
 
int main(int argc,char *argv[])
{
        int i,j,k;
        test()
        {
                int n;
                sc(n);
                int a[200]={0};
                int m;
                sc(m);
                wl(m)
                {
                        int x,y,z;
                        sc2(x,y);
                        sc(z);
                        a[x]+=z;
                        a[y]+=z;
                }
                int cnt=0;
                for(i=1;i<=n;i++)
                        if(a[i]&1)
                                cnt++;
                if(cnt>2)
                        printf("NO\n");
                else
                {
                        if(cnt!=0)
                        {
                                for(i=1;i<=n;i++)
                        {
                                if(a[i]&1)
                                        break;
                        }
                                printf("YES %d\n",i );
                        }
                        else
                        {
                                printf("YES %d\n",1 );
                        }
                }
        }