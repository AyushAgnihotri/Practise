#include<iostream>
using namespace std;
int main()
{
    int t,i=1;
    long long  s,r;
    cin>>t;
    while(t--)
    {
           cin>>r;

           s = 4*r*r;
           cout<<"Case "<<i<<": "<<s<<".25"<<endl;
           i++;
    }
    return 0;

}