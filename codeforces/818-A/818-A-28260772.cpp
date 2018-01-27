#include <iostream>
using namespace std;
#define ll long long int 
int main()
{
    ll n, k, a, b, c;
    cin >> n >> k;
    a = (n/2)/(k+1);
    b = a*k;
    c = n-a-b;
    cout << a << " "<< b <<" "<< c;
    return 0;
}