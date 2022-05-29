#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ll n,a;
    cin>>n;
    set<ll> nums;
    for(int i = 1; i<=2*n+1; i++){
        nums.insert(i);
    }

    while(nums.size()){
        cout<<*nums.begin()<<endl;
        nums.erase(nums.begin());
        cin>>a;
        if(a == 0) continue;
        nums.erase(nums.find(a));
    }

}