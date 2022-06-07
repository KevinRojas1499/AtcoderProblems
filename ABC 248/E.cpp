#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll n,k;
    cin>>n>>k;
    vector<pair<ll,ll>> p(n);
    map<tuple<ll,ll,ll>,set<ll>> numberOfLines;
    for(int i = 0; i<n; i++){
        cin>>p[i].first>>p[i].second;
    }
    for(int i = 0; i<n; i++){
        for(int j = i+1; j<n; j++){
            ll a = p[i].second-p[j].second;
            ll b = p[j].first-p[i].first;
            ll c = -a*p[i].first-b*p[i].second;
            ll g = __gcd(abs(a),__gcd(abs(b),abs(c)));
            a/=g;b/=g;c/=g;
            if(a<0 || (a==0 && b<0)){
                a*=-1; b*=-1; c*=-1;
            }
            numberOfLines[{a,b,c}].insert(i);
            numberOfLines[{a,b,c}].insert(j);
        }
    }
    ll res = 0;
    for(auto [tuple, set] : numberOfLines){
        if((ll)set.size()>=k) {
            res++;
        }
    }
    if(k == 1) cout<<"Infinity\n";
    else cout<<res<<"\n";
}