#include <bits/stdc++.h>
#define ll long long

using namespace std;

const ll MOD = 998244353;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll n,k;
    cin>>n>>k;
    vector<string> words(n);
    for(int i = 0; i<n; i++) {
        cin>>words[i];
    }
    ll res = -1;
    for(int i = 1; i<= (1<<n); i++){
        map<char,ll> count;
        for(int j = 0; j<n; j++){
            if(!(i & (1<<j))) continue;
            for(auto c : words[j]){
                count[c]++;
            }
        }
        ll cur = 0;
        for(auto [a,b]: count){
            if(b == k){
                cur++;
            }
        }
        res = max(res,cur);
    }
    cout<<res<<"\n";
}