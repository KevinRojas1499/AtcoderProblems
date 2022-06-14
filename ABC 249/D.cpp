#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll n;
    cin>>n;
    map<ll,ll> count;
    vector<ll> a(n);
    for(int i = 0; i<n; i++) {
        cin>>a[i];
        count[a[i]]++;
    }
    ll res = 0;
    for(int i = 0; i<n; i++){
        if(a[i] == 1){
            ll k = count[1];
            res+=k*k;
        }
        else{
            for(int j = 1; j*j<=a[i]; j++){
                if(a[i]%j == 0){
                    if(j == 1){
                        res+=(2*count[1]*(count[a[i]]));
                    }
                    else if(j*j == a[i]){
                        ll k = count[j];
                        res+=(k*k);
                    }
                    else{ 
                        res+=(2*count[j]*count[a[i]/j]);
                    }
                }
            }
        }
    }
    cout<<res<<"\n";

}