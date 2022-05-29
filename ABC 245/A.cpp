#include <bits/stdc++.h>
#define ll long long

using namespace std;


int main () {
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a*60+b <= c*60+d){
        cout<<"Takahashi\n";
    }
    else {
        cout<<"Aoki\n";
    }
}