#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
	ll n,x;
	cin>>n;
	vector<ll> a(n);
	ll tot = 0;
	for(int i = 0; i<n;i++){
		cin>>a[i];
		tot+=a[i];
	}
	cin>>x;
	
	ll min = x/tot;
	ll res = min*n;
	ll cur = min*tot;
	for(int i= 0; i<n; i++){
		cur+=a[i];
		if(cur>x){
			cout<< res+i+1<<"\n";
			return 0;
		}
	}
			
	
}
