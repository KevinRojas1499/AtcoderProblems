#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ll n,k,inf = 1e16;
    cin>>n>>k;
    vector<ll> a(n),dp(n,inf);
    for(int i = 0; i<n; i++) cin>>a[i];
    dp[0] = 0;
    for(int i = 0; i<n; i++){
        for(int j = 1; j<=k; j++){
            if(i+j <n) dp[i+j] = min(dp[i+j],dp[i]+abs(a[i]-a[i+j]));
        }
    }
    cout<<dp[n-1]<<"\n";
}