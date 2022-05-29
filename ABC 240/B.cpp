#include <bits/stdc++.h>
#define ll long long

using namespace std;


int main(){
    ll n;
    cin>>n;
    set<ll> a;
    for(int i = 0; i<n; i++){
        ll b;
        cin>>b;
        a.insert(b);
    }
    cout<<a.size()<<"\n";
}