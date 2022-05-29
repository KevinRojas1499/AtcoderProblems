#include <bits/stdc++.h>
#define ll long long

using namespace std;

const ll inf = 1e18;

int main(){
    ll n,x;
    cin>>n>>x;
    string s;
    cin>>s;
    for(int i = 0; i<n; i++){
        if(s[i] == 'U'){
            if( x == 1) continue;
            x/=2;
        }
        else if (s[i] == 'L'){
            if(x> inf-x) continue;
            x*=2;
        }
        else{
            if(x> inf-x-1) continue;
            x*=2;
            x++;
        }
    }
    cout<<x<<"\n";
}