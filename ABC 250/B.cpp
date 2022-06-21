#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    ll n,a,b;
    cin>>n>>a>>b;
    ll cur = 0, ccur = 0;;
    ll count = 0;
    for(int i = 0; i<a*n; i++){
        ll c = 0;
        cur = ccur;
        for(int j = 0;j<b*n; j++){
            if(cur == 0) cout<<".";
            else cout<<"#";
            c++;
            if(c%b == 0) cur = cur == 0 ? 1 : 0;
        }
        cout<<"\n";
        count++;
        if(count%a == 0) ccur = ccur == 0 ? 1 : 0;
    }
}