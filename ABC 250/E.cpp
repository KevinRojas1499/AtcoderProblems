#include <bits/stdc++.h>
#define ll long long

using namespace std;


int main() {
    ll n,q;
    cin>>n;
    vector<ll> a(n),b(n);
    for(int i = 0; i<n; i++) cin>>a[i];
    for(int i = 0; i<n; i++) cin>>b[i];
    cin>>q;
    vector<pair<ll,ll>> queries(q);

    for(int i = 0; i<q; i++) cin>>queries[i].first>>queries[i].second;

    sort(queries.begin(),queries.end());
    set<ll> curA, curB, inter;
    ll idxA = 0, idxB = 0;
    for(int i = 0; i<q; i++){
        auto [x,y] = queries[i];
        for(int j = idxA; j<x; j++) {
            if(inter.find(a[j]) != inter.end()) continue;
            else if(curB.find(a[j]) != curB.end()){
                curB.erase(a[j]);
                inter.insert(a[j]);
            }
            else {
                curA.insert(a[j]);
            }
        }
        for(int j = idxB; j<y; j++){
            if(inter.find(b[j]) != inter.end()) continue;
            else if(curA.find(b[j]) != curA.end()){
                curA.erase(b[j]);
                inter.insert(b[j]);
            }
            else {
                curB.insert(b[j]);
            }
        }
        if(curA.size() == curB.size() && curA.size() == 0){
            cout<<"Yes\n";
        }
        else{
            cout<<"No\n";
        }
    }
}