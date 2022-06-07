#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll a,b,k;
    cin>>a>>b>>k;
    double klog = log(1.0*k);
    double dlog = log(1.0*b/a);
    ll x = dlog/klog;
    if(a*pow(k,x)>=b) cout<<x<<"\n";
    else cout<<x+1<<"\n";
}