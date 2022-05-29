# include<bits/stdc++.h> 
#define ll long long
using namespace std;
const ll maxA = 1e16+1000;
int main(){
	//cin.tie(NULL);
	//ios_base::sync_with_stdio(false);
	ll k,n,sum;
	cin>>k;
	n = ceil(k/maxA);
	if(n<2) n = 2;
	cout<<n<<endl;
	vector<ll> q(n);
	sum = 0;		
	for(ll i = 0; i<n-1; i++){
		q[i] = k/n;
		sum+=q[i];
	}
	q[n-1] = k-sum;
	vector<ll> a(n);
	for(ll i  = 0; i<n; i++){
		a[i] = q[i]*(n+1)+1-k;
		cout<<a[i]<<" ";
	}
	
	cout<<endl;
	/*
	int c = 0;
	sort(a.begin(),a.end());
	while(a[n-1] > n-1) {
		for(int i = 0; i < n-1; i++) {
			a[i]++;
		}
		a[n-1]-=n;
		sort(a.begin(),a.end());
		c++;
	}
	cout << k << " " << c << "\n";
	*/
}

