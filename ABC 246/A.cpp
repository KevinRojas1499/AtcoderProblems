#include <bits/stdc++.h>
#define ll long long

using namespace std;


int main() {
    ll a,b,c,d,e,f;
    cin>>a>>b>>c>>d>>e>>f;

    ll x,y;
    if(a == c) x = e;
    if(a == e) x = c;
    if(c == e) x = a;
    if(b == d) y = f;
    if(b == f) y = d;
    if(d == f) y = b;
    cout<<x<<" "<<y<<"\n";    
}