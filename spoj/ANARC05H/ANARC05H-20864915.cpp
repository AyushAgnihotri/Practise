    #include <bits/stdc++.h>
     
    using namespace std;
     
    string s;
    int n;
    long long dp[26][226];
    bool vis[26][226];
     
    long long f(int idx, int prevSum)
    {
       if ( idx == n ) return 1; //base case
       if ( vis[idx][prevSum] ) return dp[idx][prevSum]; 
       vis[idx][prevSum] = true;
       long long ans = 0; 
       int val = 0;
      //Exploring all the possibilities according to the problem 
       for ( int i = idx; i < n; i++ ) {
            val += s[i]-48;
            if ( val >= prevSum ) ans += f(i+1,val); 
       }
       dp[idx][prevSum] = ans;
       return ans;
    }
     
    int main()
    {
       for ( int l = 1;; l++ ) {
           cin >> s;
           if ( s == "bye" ) break;
           n = (int)(s.size());
           memset(vis, false, sizeof(vis));
           long long ans = f(0,0);
           cout << l << ". " << ans << endl;
       }
       return 0;
    }