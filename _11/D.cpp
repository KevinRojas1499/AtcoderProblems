# include<bits/stdc++.h> 
#define ll long long
using namespace std;

int main(){
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	ll n,imp;
	cin>>n;
	vector<ll> x(n);
	vector<ll>y(n);
	for(int i = 0; i<n; i++){
		cin>>x[i]>> y[i];
	}
	ll a = ((x[0]+y[0])%2+2)%2;
	imp = 0;
	for(int i = 0; i<n; i++){
		if(((x[i]+y[i])%2+2)%2 !=a)
			imp = 1;
	}
	if(imp){
		cout<<"-1\n";
	}
	else{
		ll a = abs(x[0])+abs(y[0]);
		for(int i = 0; i<n; i++){
			a = max(a,abs(x[i])+abs(y[i]));
		}
		cout<<a<<'\n';
		for(int i = 0; i< a;i++)
			cout<<"1 ";
		cout<<'\n';
		for(int i  = 0; i<n; i++){
			if(x[i]<0){
				for(int j = 0; j<abs(x[i]);j++) cout<< 'L';
			}
			else{
				for(int j = 0; j<x[i];j++) cout<< 'R';
			}		
			x[i] = abs(x[i]);	
			ll c = (a-x[i]+y[i])/2;
			ll d = (a-x[i]-y[i])/2;
			//cout<<c<<" cd "<<d<<'\n';
			for(int j = 0; j<c;j++) cout<< 'U';
			for(int j = 0; j<d;j++) cout<< 'D';
			cout<<'\n';
		}
	}
		
}
