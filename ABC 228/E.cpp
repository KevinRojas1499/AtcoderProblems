#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll MOD = 998244353;

ll mod(ll a, ll m) {                            // returns a (mod m)
  return ((a%m) + m) % m;                        // ensure positive answer
}

ll modPow(ll b, ll p, ll m) {                  // assume 0 <= b < m
  if (p == 0) return 1;
  ll ans = modPow(b, p/2, m);                    // this is O(log p)
  ans = mod(ans*ans, m);                         // double it first
  if (p&1) ans = mod(ans*b, m);                  // *b if p is odd
  return ans;                                    // ans always in [0..m-1]
}



int main(){
	ll n,k,m;
	cin>>n>>k>>m;
	m = mod(m,MOD);
	k = mod(k,MOD-1);
	if(m == 0){
		cout<<"0\n";
		return 0;
	}	
	ll res = modPow(k,n,MOD-1);
	res = modPow(m,res,MOD);
	res = mod(res,MOD);
	
	cout<<res<<"\n";

}
