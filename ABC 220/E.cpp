#include <bits/stdc++.h>
#define ll long long

using namespace std;


const ll MOD = 998244353;

ll dp[1000005];
ll powers[2000005];

int main(){
	ll n,d;
	cin>>n>>d;
	ll cur = 1;
	for(int i = 0; i<d+5; i++){
		powers[i] = cur;
		cur*=2;
		cur%=MOD;
	}	
	ll first = (d+1)/2+1;
	cout<<first<<"\n";
	dp[first] = 0;
	
	
	for(int i = 0; i<=first; i++){
		if(d-i>first){
			continue;
		}
		dp[first]+=powers[d-2];
		dp[first]%MOD;
	}
	cout<<dp[first]<<"\n";
	for(int i = first+1; i<=n; i++){
		dp[i] = d*powers[d]+2*dp[i-1];
		dp[i]%=MOD;
	}
	dp[n] = (dp[n]%MOD+MOD)%MOD;
	cout<<dp[n];
	
}
