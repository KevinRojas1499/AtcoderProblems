#include <bits/stdc++.h>
#define ll long long

using namespace std;


int main(){
    ll n,m,aa,bb;
    cin>>n>>m;
    multiset<ll> a;
    for(int i = 0; i<n; i++){
        cin>>aa;
        a.insert(aa);
    }
    bool possible = true;
    for(int i = 0; i<m; i++){
        cin>>bb;
        auto it = a.find(bb);
        if(it == a.end()){
            possible = false;
            break;
        }
        else{
            a.erase(it);
        }
    }
    if(possible) cout<<"Yes\n";
    else cout<<"No\n";
    
}