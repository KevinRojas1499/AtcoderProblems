#include <bits/stdc++.h>
#define ll long long

using namespace std;


int main () {
    map<string,ll> sc;
    ll n,t;
    string s;
    cin>>n;
    ll best = 0, bestIdx = 0;
    for(int i = 0; i<n; i++){
        cin>>s>>t;
        if(sc.find(s) == sc.end()){
            sc[s] = t;
            if(t > best ) bestIdx = i;
            best = max(best,t);
        }
    }
    cout<<bestIdx+1<<"\n";
}