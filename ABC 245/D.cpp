#include <bits/stdc++.h>
#define ll long long 


using namespace std;


int main(void) {
	ll n, m;
	cin >> n >> m;
	vector<ll>a(n+1), b(m+1), c(n+m+1);
	for (int i = 0; i <= n; i++)cin >> a[i];
	for (int i = 0; i <= n + m; i++)cin >> c[i];

	for (int i = m; i >= 0; i--) {
		b[i] = c[i + n] / a[n];
		for (int j = 0; j <= n; j++) {
            c[i + j] -= b[i] * a[j];
        } 
	}
	for (int i = 0; i <= m; i++) cout << b[i] << " ";
	cout<<"\n";
}