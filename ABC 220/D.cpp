#include <bits/stdc++.h>
#define ll long long

using namespace std;


const ll MOD = 998244353;

int main(){
	ll n,x;
	cin>>n;
	vector<ll> a(n);
	ll tot = 0;
	for(int i = 0; i<n;i++){
		cin>>a[i];
	}
	ll dp[100005][10];
	
	memset(dp,0,sizeof(dp));
	
	dp[0][a[0]] = 1;
	for(int i = 1; i<n; i++){
		for(int j = 0; j<10; j++){
			if(dp[i-1][j]){
				ll op1 = ((j*a[i])%10+10)%10;
				ll op2 = ((j+a[i])%10+10)%10;
				dp[i][op1]+= dp[i-1][j];
				dp[i][op1]%=MOD;
				dp[i][op2]+= dp[i-1][j];
				dp[i][op2]%=MOD;
			}
		}
	}

	for(int i = 0; i<10; i++){
		dp[n-1][i] = (dp[n-1][i]%MOD+MOD)%MOD;
		cout<<dp[n-1][i]<<"\n";
	}
		
	
	
}
