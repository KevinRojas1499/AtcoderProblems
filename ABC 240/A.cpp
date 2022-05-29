#include <bits/stdc++.h>
#define ll long long

using namespace std;


int main(){
    ll a,b;
    cin>>a>>b;
    ll diff = ((a-b)%10+10)%10;
    if(diff == 1 || diff == 9){
        cout<<"Yes\n";
    }
    else{
        cout<<"No\n";
    }
}