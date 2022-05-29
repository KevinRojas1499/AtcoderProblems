#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll sumOfCubes(ll k){
    return (k*(k+1)/2);
}

int main(){
    ll t,n,m,x,y;
    cin>>t;
    while(t--){
        cin>>n>>m;
        vector<ll> a(n),b(n),c(n),times(n);
        ll res = -1;
        for(int i = 0; i<n; i++){
            cin>>x>>y;
            if(i == 0) res = x;
            res = max(res,x);
            a[i] = x*sumOfCubes(y);
            cout<<"CUBES "<<y<<" "<<sumOfCubes(y)<<"\n";
        }
        for(auto aa : a) cout<<aa<<" ";
        cout<<"\n";
        c[0] = a[0];
        res = max(res,c[0]);
        for(int i = 1; i<n; i++){
            c[i] = c[i-1]+a[i];
            res = max(res,c[i]);
        }
        for(auto cc : c){
            cout<<cc<<" ";
        }
        cout<<"\n";
        cout<<res<<"\n";
        
    }

}