#include <bits/stdc++.h>
#define ll long long

using namespace std;

const ll MOD = 998244353, mxN = 2005;
vector<vector<ll>> adj;

ll dp[mxN][mxN][2];
bool seen[mxN][mxN][2];
ll n, m, a, b, k, s, t, x;

ll dfs(ll u, ll length, ll mod) {
    if (length == k) {
        if (u == t && mod == 0) {
            return dp[u][length][mod] = 1;
        } else
            return dp[u][length][mod] = -1;
    }
    if (length > k) {
        return dp[u][length][mod] = -1;
    }
    if (seen[u][length][mod]) return dp[u][length][mod];
    seen[u][length][mod] = 1;
    for (auto v : adj[u]) {
        ll newMod = v == x ? !mod : mod;
        if(dfs(v, length + 1, newMod) != -1){
            dp[u][length][mod] += dp[v][length + 1][newMod];
        }
        dp[u][length][mod] %= MOD;
    }
    return dp[u][length][mod];
}

int main() {
    cin >> n >> m;
    cin >> k >> s >> t >> x;
    adj.resize(n + 1);
    memset(seen, 0, sizeof seen);
    memset(dp, 0, sizeof dp);

    for (int i = 0; i < m; i++) {
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    ll res = dfs(s, 0, 0);
    res = (res+MOD)%MOD; 
    cout << res << "\n";
}