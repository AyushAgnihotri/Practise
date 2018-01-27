#include <bits/stdc++.h>
using namespace std;
#define lli long long int
lli mod=1e9+7;
lli a[10000005];
lli lp[10000005];
unordered_map <lli,lli> fp,cnt;
void pre()
{
  lli i,j;
  for(i=2;i<=1e7;i++)
  {
    if(!a[i])
    {
      fp[i]=-1;
      cnt[i]=0;
      lp[i]=i;
      for(j=i*i;j<=1e7;j+=i)
      {
        a[j]=1;
        lp[j]=i;
      }
    }
  }
}
lli mexp(lli a,lli b,lli m)
{
  lli res=1;
  while(b>0)
  {
    if(b%2==1)
    {
      res*=a;
      res%=m;
    }
    a=(a*a)%m;
    b/=2;
  }
  return res;
}
int main()
{
  pre();
//  cout<<"Hello\n";
  lli n,m,i,j,x,ans=1,l;
  unordered_map <lli,lli> tmp;
  scanf("%lld",&n);
  for(i=1;i<=n;i++)
  {
    scanf("%lld",&m);
    for(j=1;j<=m;j++)
    {
      scanf("%lld",&x);
      while(x!=1)
      {
      	tmp[lp[x]]++;
      	x/=lp[x];
      }
    }
    for(unordered_map<lli,lli> :: iterator it=tmp.begin();it!=tmp.end();it++)
    {
      cnt[it->first]++;
      if(fp[it->first]==-1)
      {
        fp[it->first]=it->second;
      }
      else
      {
        fp[it->first]=min(fp[it->first],it->second);
      }
    }
    tmp.clear();
  }
  for(unordered_map<lli,lli> :: iterator it=fp.begin();it!=fp.end();it++)
  {
    if(cnt[it->first]==n)
    {
      ans=ans*mexp(it->first,it->second,mod);
      ans%=mod;
    }
  }
  printf("%lld\n",ans);
  return 0;
}