#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ll n;
    cin>>n;
    vector<ll> x(n),y(n);
    map<ll,set<ll>> left,right;
    for(int i = 0; i<n; i++){
        cin>>x[i]>>y[i];
    }
    string s;
    cin>>s;
    for(int i= 0; i<n; i++){
        if(s[i] == 'L'){
            left[y[i]].insert(x[i]);
        }
        else{
            right[y[i]].insert(x[i]);
        }
    }
    bool possible = false;
    for(auto [posY, xVals] : left){
        ll minX = *xVals.rbegin();
        if(right.find(posY) == right.end()) continue;
        else{
            ll maxX = *(right[posY].begin());
            if(minX >= maxX) {
                possible  = true;
                break;
            } 
        }
    }
    if(possible) cout<<"Yes\n";
    else cout<<"No\n";
}