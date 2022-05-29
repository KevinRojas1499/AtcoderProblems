#include <bits/stdc++.h>
#define ll long long

using namespace std;


int main(){
    ll a,b,c,x;
    cin>>a>>b>>c>>x;
    if(x<=a) cout<<"1\n";
    else if( x>a && x<=b){
        double res = c*1.0/(b-a);
        res = min(res,1.0);
        cout<<res<<"\n";
    }
    else{
        cout<<"0\n";
    }
}