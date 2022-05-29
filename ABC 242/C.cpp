#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll dp[1000005][10];
const ll MOD = 998244353;

int main(){
    ll n;
    cin>>n;
    for(int i = 1; i<10; i++) dp[1][i] = 1;

    for(int i = 2; i<=n; i++){
        for(int k = 1; k<10; k++){
            dp[i][k] = dp[i-1][k];
            if(k>1) dp[i][k]+=dp[i-1][k-1];
            dp[i][k]%=MOD;
            if(k<9) dp[i][k]+=dp[i-1][k+1];
            dp[i][k]%=MOD;
        }
    }
    ll res = 0;
    for(int i = 1; i<10; i++) res+=dp[n][i];
    cout<<(res+MOD)%MOD<<"\n";


}