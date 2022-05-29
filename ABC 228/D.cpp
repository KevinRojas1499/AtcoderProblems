#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll N = 1<<20;

ll mod(ll kk){
	return (kk%N+N)%N;
}

int main(){
	ll q,t,x,h;
	cin>>q;
	vector<ll> a(1<<20+5,-1);
	set<ll> menosUno;
	
	for(int i = 0; i< N; i++){
		menosUno.insert(i);
	}

	for(int i = 0; i<q; i++){
		cin>>t>>x;
		
		if(t == 1){
			h = mod(x);
			ll val = 0;
			if(menosUno.lower_bound(h) == menosUno.end()){
				if(menosUno.size()>0){
					val =  *menosUno.begin();
				}
				else{
					continue;
				}
			}
			else{
				val = *menosUno.lower_bound(h);
			}
			menosUno.erase(val);
			a[val] = x;
		}
		else{
			x = mod(x);
			cout<<a[x]<<"\n";			
		}
	}

}
