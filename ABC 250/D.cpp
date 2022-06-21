#include <bits/stdc++.h>
#define ll long long

using namespace std;

const ll mxN = 1e6+100;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    vector<ll> primes;
    vector<bool> isPrime(mxN,true);
    for(int i = 2; i<mxN; i++){
        if(isPrime[i]){
            primes.push_back(i);
            for(int j = 2*i; j<mxN; j+=i){
                isPrime[j] = false;
            }
        }
    }
    ll n;
    cin>>n;
    ll res = 0;
    for(int i = 1; i<(ll)primes.size(); i++){
        ll cube = primes[i]*primes[i]*primes[i];
        if(cube >= n) break;
        auto it = upper_bound(primes.begin(),primes.end(),min(n/cube,primes[i]));
        it--;
        res+= (it-primes.begin()+1);
        if(*it == primes[i]) res--;
    }
    cout<<res<<"\n";
}