#include <bits/stdc++.h>
#define ll long long

using namespace std;

const ll MAX_N = 6005;
ll n,p;

ll fact[MAX_N];


ll mod(ll a, int m = p) {                            // returns a (mod m)
  return ((a%m) + m) % m;                        // ensure positive answer
}

ll modPow(ll b, int a, int m = p) {                  // assume 0 <= b < m
  if (a == 0) return 1;
  ll ans = modPow(b, a/2, m);                    // this is O(log p)
  ans = mod(ans*ans, m);                         // double it first
  if (a&1) ans = mod(ans*b, m);                  // *b if p is odd
  return ans;                                    // ans always in [0..m-1]
}

ll inv(ll a) {                                   // Fermat's little theorem
  return modPow(a, p-2, p);                      // modPow in Section 5.8
}   

ll C(int m, int k) {                             // O(log p)
  if (m < k) return 0;                           // clearly
  return (((fact[m] * inv(fact[k])) % p) * inv(fact[m-k])) % p;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin>>n>>p;

    fact[0] = 1;
    for (int i = 1; i < MAX_N; ++i){                // O(MAX_N) pre-processing
        fact[i] = (fact[i-1]*i)% p;
    }
    ll res = 0;
    for(int k = 1; k<=n; k++){
        cout<<k-1<<" "<<res<<"\n";
        if(2*k < n){
            ll cur = C(n+k-1,n);
            if(k>1) cur-=2;
            cout<<cur<<" INIT\n";
            for(int i = 1; i<=k; i++){
                if(i != 1) cur*=25;
                else cur*=26;
                cur%=p;
            }
            cout<<cur<<" INIT\n";
            res+=cur;
            res = mod(res);
        }
        else {
            break;
        }
    }
    res = mod(res);
    cout<<res<<"\n";

}