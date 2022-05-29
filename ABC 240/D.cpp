#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ll n,b, cur = 0;
    cin>>n;
    vector<ll> a, count;
    for(int i = 0; i<n; i++){
        cin>>b;
        if(a.size() > 0 && a.back() == b){
            cur = count.back()+1;
            if(count.back()+1 == b){
                for(int j = 0; j<b-1; j++) a.pop_back(), count.pop_back();
                cout<<a.size()<<"\n";
                continue;
            }
        }
        else{
            cur = 1;
        }
        a.push_back(b);
        count.push_back(cur);
        
        cout<<a.size()<<"\n";
    }
}