#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll a,b,c,d,e,f,x;
    cin>>a>>b>>c>>d>>e>>f>>x;
    ll t = 0, tak = 0, aok = 0;
    ll x1 = x;
    while(x> 0){
        ll time1 =min(x,a);
        x-= time1;
        tak+=b*time1;
        ll time2 = min(x,c);
        x-=time2;
    }
    x = x1;
    while(x> 0){
        ll time1 =min(x,d);
        x-= time1;
        aok+=e*time1;
        ll time2 = min(x,f);
        x-=time2;
    }
    if(tak > aok){
        cout<<"Takahashi\n";
    }
    else if(tak < aok){
        cout<<"Aoki\n";
    }
    else{
        cout<<"Draw\n";
    }
}