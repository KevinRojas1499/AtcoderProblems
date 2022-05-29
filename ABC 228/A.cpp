#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
	ll s,t,x;
	
	cin>>s>>t>>x;
	if(t == 0){
		t = 24;
	}
	
	if(s<=t){
			
		if(x>=s && x<t){
			cout<<"Yes\n";
		}
		else{
			cout<<"No\n";
		}
	}
	else{
		if(x>=s || x<t){
			cout<<"Yes\n";
		}
		else{
			cout<<"No\n";
		}
	}
}
