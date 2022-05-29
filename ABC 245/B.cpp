#include <bits/stdc++.h>
#define ll long long

using namespace std;


int main () {
    ll n;
    cin>>n;
    vector<ll> a(n);
    ll firstMissing = 0;
    for(int i = 0; i<n; i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    for(int i = 0; i<n; i++){
        if(a[i] == firstMissing) firstMissing++;
    }
    cout<<firstMissing<<"\n";
}