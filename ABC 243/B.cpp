#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ll n;
    cin>>n;
    vector<ll> a(n),b(n);
    set<ll> c,d;
    for(int i = 0; i<n; i++) cin>>a[i];
    ll same = 0, sameDiff = 0;
    for(int i = 0; i<n; i++){
        cin>>b[i];
        if(a[i] == b[i]) same++;
        else c.insert(a[i]),d.insert(b[i]);
    }

    for(auto cc : c){
        if(d.find(cc) != d.end()){
            sameDiff++;
        }
    }
    cout<<same<<"\n";
    cout<<sameDiff<<"\n";

}