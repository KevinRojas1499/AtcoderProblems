#include <bits/stdc++.h>
#define ll long long

using namespace std;


int main() {
    ll x,y;
    cin>>x>>y;
    long double alf = atan2(y,x);
    cout<<cos(alf)<<" "<<sin(alf)<<"\n";
}