#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
	ll n,k,p;
	cin>>n>>k;
	
	vector<pair<ll,ll>> total(n);
	vector<ll> score(n);
	
	for(int i = 0; i<n; i++){
		ll cur = 0;
		for(int j = 0; j<3; j++){
			cin>>p;
			cur+=p;
		}
		total[i] = {cur,i};
		score[i] = cur;
	}
	sort(total.rbegin(),total.rend());
	
	ll kthBest = total[k-1].first;
	for(int i = 0 ; i<n; i++){		
		//cout<<score[i]+300<<" "<<kthBest<<"\n";
		if(score[i]+300>= kthBest){
			cout<<"Yes\n";
		}
		else{
			cout<<"No\n";
		}
	}
	

}
