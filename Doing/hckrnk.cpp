#include <bits/stdc++.h>

using namespace std;

long long int stockmax(vector <long long int> v) {
    long long int i,cnt=0,cost=0,profit=0,j,mx=0,n=v.size();
    vector<long long int> sell(n);
    for(i=n-1;i>=0;i--) {
        if(v[i]>mx) {
            mx=v[i];
            sell[i]=1;
        }
    }
    for(i=0;i<n;i++) {
        if(sell[i]==0) {
            cnt++;
            cost+=v[i];
        }
        else if(cost!=0) {
            profit += (v[i]*cnt)-cost;
            cnt=0;
            cost=0;
        }
    }
    return profit;
}

int main() {
    long long int t;
    cin >> t;
    for(long long int a0 = 0; a0 < t; a0++){
        long long int n;
        cin >> n;
        vector<long long int> prices(n);
        for(long long int prices_i = 0; prices_i < n; prices_i++){
           cin >> prices[prices_i];
        }
        long long int result = stockmax(prices);
        cout << result << endl;
    }
    return 0;
}
