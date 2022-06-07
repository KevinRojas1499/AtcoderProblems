#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll n,q,l,r,x;
    cin>>n;
    vector<ll> a(n);
    vector<vector<ll>> idx(n+1);
    for(int i = 0; i<n; i++) {
        cin>>a[i];
        idx[a[i]].push_back(i+1);
    }
    cin>>q;
    while(q--){
        cin>>l>>r>>x;
        auto up = lower_bound(idx[x].begin(),idx[x].end(),r);
        auto low = lower_bound(idx[x].begin(),idx[x].end(),l);
        ll c = 0, d = 0;
        if(up == idx[x].end()) d = idx[x].size();
        else if (*up == r) d = up-idx[x].begin()+1;
        else d = up-idx[x].begin();
        if(low == idx[x].end()) c = idx[x].size();
        else if(*low == l) c = low-idx[x].begin();
        else c = low-idx[x].begin();
        d = max(d,0ll);
        c = max(c,0ll);
        cout<<d-c<<"\n";
    }
}