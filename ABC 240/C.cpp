#include <bits/stdc++.h>
#define ll long long

using namespace std;


int main(){
    ll n,x;
    cin>>n>>x;
    vector<ll> a(n+1),b(n+1);
    for(int i = 1; i<=n; i++){
        cin>>a[i]>>b[i];
    }
    map<ll,set<ll>> possible;
    possible[0].insert(0);
    for(int i= 1; i<=n;i++){
        for(auto v : possible[i-1]){
            possible[i].insert(v+a[i]);
            possible[i].insert(v+b[i]);
        }
    }
    if(possible[n].find(x) != possible[n].end()){
        cout<<"Yes\n";
    }
    else{
        cout<<"No\n";
    }
}