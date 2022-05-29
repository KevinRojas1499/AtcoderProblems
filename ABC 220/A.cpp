#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
	int a,b,c;
	cin>>a>>b>>c;
	int cur = c;
	while(cur<b){
		cur+=c;
		if(cur>a && cur< b){
			cout<<cur;
			return 0;
		}
	}
	cout<<"-1";
}
