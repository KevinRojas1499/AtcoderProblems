#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll r,h,c,w;
    cin>>r>>h>>c>>w;
    ll res = 0;
    for(int i = 1;i<=r; i++){
        for(int j = 1; j<=h; j++){
            if(abs(c-i)+abs(w-j) == 1) res++;
        }
    }
    cout<<res<<"\n";
}