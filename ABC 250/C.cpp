#include <bits/stdc++.h>
#define ll long long

using namespace std;

const ll MOD = 998244353;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll n,q,x;
    cin>>n>>q;
    vector<ll> a(n+1), pos(n+1);
    for(int i = 1; i<=n; i++) {
        a[i] = i;
        pos[a[i]] = i;
    }
    while(q--){
        cin>>x;
        ll p = pos[x];
        if(p < n){
            swap(a[p],a[p+1]);
            pos[a[p]] = p;
            pos[a[p+1]] = p+1;
        }
        else {
            swap(a[p],a[p-1]);
            pos[a[p]] = p;
            pos[a[p-1]] = p-1;
        }
    }
    for(int i = 1; i<=n; i++) cout<<a[i]<<" ";
    cout<<"\n";
}