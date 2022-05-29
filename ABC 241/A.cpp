#include <bits/stdc++.h>
#define ll long long

using namespace std;


int main(){
    vector<ll> a(10);
    for(int i = 0; i<10; i++){
        cin>>a[i];
    }
    cout<<a[a[a[0]]]<<"\n";
    
}