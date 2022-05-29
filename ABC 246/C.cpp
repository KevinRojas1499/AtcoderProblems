#include <bits/stdc++.h>
#define ll long long

using namespace std;


int main() {
    ll n,k,x;
    cin>>n>>k>>x;
    vector<ll> a(n);
    ll res = 0;
    for(int i = 0; i<n; i++){
        cin>>a[i];
        res+=a[i];
        if(k>0){
            ll cant = min(k,a[i]/x);
            res-=cant*x;
            a[i]-=cant*x;
            k-=cant;
        }
    }
    if(k>0){
        sort(a.begin(),a.end());
        for(int i = n-1; i>=0; i--){
            if(k>0) res-=a[i],k--;
            else break;
        }
    }
    
    cout<<res<<"\n";
}