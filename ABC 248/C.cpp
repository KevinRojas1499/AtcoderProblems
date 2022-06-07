#include <bits/stdc++.h>
#define ll long long

using namespace std;

const ll MOD = 998244353;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll n,m,k;
    cin>>n>>m>>k;

    ll dp[n+5][k+5];
    memset(dp,0,sizeof dp);
    dp[0][0] = 1;
    for(int i = 1; i<=n; i++){
        for(int l = 1; l<=k; l++){
            for(int j = 1; j<=m; j++){
                if(l-j>=0) dp[i][l]+=dp[i-1][l-j];
                dp[i][l]%=MOD;
            }
        }
    }
    ll res = 0;
    for(int i = 1; i<=k; i++){
        res+=dp[n][i];
        res%=MOD;
    }
    res+=MOD;
    res%=MOD;
    cout<<res<<"\n";
}