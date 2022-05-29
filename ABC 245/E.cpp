#include <bits/stdc++.h>
#define ll long long 


using namespace std;

int main(void) {
	ll n, m,x,y;
	cin >> n >> m;
	vector<pair<ll,ll>> a(n), b(m);
	for (int i = 0; i < n; i++) {
        cin>>x;
        a[i].first = x;
    }
    for (int i = 0; i < n; i++) {
        cin>>x;
        a[i].second = x;
    }
	for (int i = 0; i < m; i++) {
        cin>>x;
        b[i].first = x;
    }
    for (int i = 0; i < m; i++) {
        cin>>x;
        b[i].second = x;
    }
    vector<tuple<ll,ll,ll>> c;
    for(auto [x,y] : a){
        c.push_back({x,y,0});
    }
    for(auto [x,y] : b){
        c.push_back({x,y,1});
    }
    sort(c.begin(),c.end());
    multiset<ll> heights; 
    bool possible = true;
    for(int i = c.size()-1; i>=0; i--){
        auto [x,y,box] = c[i];
        if(!box){
            auto it = heights.lower_bound(y);
            if(it != heights.end()){
                heights.erase(it);
            }
            else{
                possible = false;
                break;
            }
        }
        else{
            heights.insert(y);
        }
    }
    if(possible) cout<<"Yes\n";
    else cout<<"No\n";
}