#include <bits/stdc++.h>
#define ll long long

using namespace std;


int main(){
    ll q,x,k,n;
    cin>>q;
    multiset<ll> a;
    while(q--){
        cin>>k>>x;
        if(k == 1){
            a.insert(x);
        }
        else if (k == 2){
            cin>>n;
            if(a.size() < n ) cout<<"-1\n";
            else{
                auto it = a.equal_range(x).second;
                int i = 0;
                for(i = 0; i<n && it != a.begin(); i++) it--;
                if(*it<=x && i == n) cout<<*it<<"\n";
                else cout<<"-1\n";
            }
        }
        else{
            cin>>n;
            if(a.size() < n ) cout<<"-1\n";
            else{
                auto it = a.lower_bound(x);
                for(int i = 0; i<n-1 && it!= a.end(); i++) it++;
                if(it != a.end()) cout<<*it<<"\n";
                else cout<<"-1\n";
            }
        }
    }

}