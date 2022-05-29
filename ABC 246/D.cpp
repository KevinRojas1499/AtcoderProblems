#include <bits/stdc++.h>
#define ll long long

using namespace std;

unsigned ll f(ll a, ll b){
    return (a+b)*(a*a+b*b);
}

int main() {
    ll n;
    cin>>n;
    ll m = pow(1.0*n,1.0/3.0);
    m++;
    unsigned ll best = (m+1)*(m*m+1);
    bool found = false;
    for(ll a = 0; a<=m && !found; a++){
        ll x = 1,y = m;
        while(x<=y){
            ll c = x+(y-x)/2;
            if(f(a,c) == n){
                best = n;
                found = true;
                break;
            }
            else if(f(a,c) > n){
                y = c-1;
            }
            else{
                x = c+1;
            }
        }
        if(f(a,x) < n){
            if(f(a,y+1) > n )best = min(best,f(a,x+1));
        }
        else{
            best = min(best,f(a,x));
        }
        if(y> 0 && f(a,y) < n){
            if(f(a,y+1) > n )best = min(best,f(a,y+1));
        }
        else if(y>0 && f(a,y)>=n){
            best = min(best,f(a,y));
        }
    }
    if(n == 0) best = 0;
    cout<<best<<"\n";
}