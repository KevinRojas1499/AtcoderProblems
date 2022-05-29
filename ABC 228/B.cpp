#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
	ll n,x;
	cin>>n>>x;
	set<ll> friends;
	friends.insert(x);
	vector<ll> a(n+1);
	for(int i = 1; i<=n; i++){
		cin>>a[i];
	}
	for(int i = x; friends.find(a[i]) == friends.end() && friends.size() < n; i= a[i]){
		friends.insert(a[i]);
	}
	cout<<friends.size()<<"\n";

}
