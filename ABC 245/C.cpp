#include <bits/stdc++.h>
#define ll long long

using namespace std;


int main () {
    ll n,k;
    cin>>n>>k;
    vector<ll> a(n), b(n);
    for(int i = 0; i<n; i++) cin>>a[i];
    for(int i = 0; i<n; i++) cin>>b[i];

    ll dp[n][2];
    memset(dp,0,sizeof dp);
    dp[n-1][0] = dp[n-1][1] = 1;
    for(int i = n-2; i>=0; i--){
        if(dp[i+1][0] && abs(a[i+1]-a[i])<=k){
            dp[i][0] = 1;
        }
        if(dp[i+1][0] && abs(a[i+1]-b[i])<=k){
            dp[i][1] = 1;
        }
        if(dp[i+1][1] && abs(b[i+1]-b[i])<=k){
            dp[i][1] = 1;
        }
        if(dp[i+1][1] && abs(b[i+1]-a[i])<=k){
            dp[i][0] = 1;
        }
    }
    if(dp[0][0] || dp[0][1]){
        cout<<"Yes\n";
    }
    else{
        cout<<"No\n";
    }
}