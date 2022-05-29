#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ll a,b,c,v;
    cin>>v>>a>>b>>c;
    ll tot = a+b+c;
    ll left = (v%tot+tot)%tot;
    if(left < a){
        cout<<"F\n";
    }
    else if (left < a+b){
        cout<<"M\n";
    }
    else{
        cout<<"T\n";
    }
}