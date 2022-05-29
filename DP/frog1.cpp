#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ll n,inf = 1e16;
    cin>>n;
    vector<ll> a(n),dp(n,inf);
    for(int i = 0; i<n; i++) cin>>a[i];
    dp[0] = 0;
    for(int i = 0; i<n; i++){
        if(i+1 <n) dp[i+1] = min(dp[i+1],dp[i]+abs(a[i]-a[i+1]));
        if(i+2 <n) dp[i+2] = min(dp[i+2],dp[i]+abs(a[i]-a[i+2]));
    }
    cout<<dp[n-1]<<"\n";
}