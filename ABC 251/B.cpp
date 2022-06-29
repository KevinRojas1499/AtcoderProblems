#include <bits/stdc++.h>
#define ll long long

using namespace std;


int main () {
    set<ll> good;
    ll n,w;
    cin>>n>>w;
    vector<ll> a(n);
    for(int i = 0; i<n; i++) {
        cin>>a[i];
        if(a[i]<= w)good.insert(a[i]);
    }
    for(int i = 0; i<n; i++){
        for(int j = i+1; j<n; j++){
            if(a[i]+a[j] <= w) good.insert(a[i]+a[j]);
        }
    }
    for(int i = 0; i<n; i++){
        for(int j = i+1; j<n; j++){
            for(int k = j+1; k<n; k++){
                if(a[i]+a[j]+a[k] <= w)good.insert(a[i]+a[j]+a[k]);
            }
        }
    }
    cout<<good.size()<<"\n";
}