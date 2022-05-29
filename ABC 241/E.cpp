#include <bits/stdc++.h>
#define ll long long

using namespace std;


int main(){
    ll n,k;
    cin>>n>>k;
    vector<ll> a(n);
    for(int i= 0; i<n;i++) cin>>a[i];

    map<ll,ll> seen;
    ll cur = 0, t = 1, res = 0;
    while(k && seen[cur] == 0){
        seen[cur] = t;
        t++;
        res+=a[cur];
        cur = (res%n+n)%n;
        k--;
    }

    if(k == 0){
        cout<<res<<'\n';
    }
    else{
        ll cycle = t-seen[cur];
        ll cur2 = cur, cycleVal = 0;
        ll start = 0;
        while(k && (start == 0 || cur != cur2)){
            start++;
            cycleVal+= a[cur];
            cur = ((res+cycleVal)%n+n)%n;
        }
        if(k == 0) cout<<res+cycleVal<<"\n";
        else{
            res+= (k/cycle)*cycleVal;
            k = (k%cycle+cycle)%cycle;
            while(k){
                res+= a[cur];
                cur = (res%n+n)%n;
                k--;
            }
            cout<<res<<"\n";
        }
    }
}