#include <bits/stdc++.h>
#define ll long long

using namespace std;

vector<ll> seen;
vector<vector<ll>> adj;
vector<pair<ll,ll>> res;
ll alone = 1;
pair<ll,ll> dfs(ll u, ll p){
    seen[u] = 1;
    ll l = 0, r = 0;
    bool firstTime = true;
    for(auto v : adj[u]){
        if(v == p || seen[v]) continue;
        auto [x,y] = dfs(v,u);
        if(firstTime) {
            l = x;
            r = y;
            firstTime = false;
        }
        if(l>x) l = x;
        if(r<y) r = y;
    }
    if(adj[u].size() == 1 && p!= -1) {
        l = alone;
        r = alone;
        alone++;
    }
    return res[u] = {l,r};
}

int main(){
    ll n,a,b;
    cin>>n;
    seen.assign(n+1,false);
    adj.resize(n+1);
    res.resize(n+1);
    for(int i = 0; i<n-1; i++){
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    dfs(1,-1);

    for(int i = 1; i<=n ;i++){
        cout<<res[i].first<<" "<<res[i].second<<"\n";
    }
}