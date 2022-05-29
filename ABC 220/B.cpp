#include <bits/stdc++.h>
#define ll long long

using namespace std;

int process(string s, int b){
	int res = 0;
	int exp = 1;
	for(int i = s.size()-1; i>=0; i--){
		res+= (s[i]-'0')*exp;
		exp*=b;
	}
	return res;
}

int main(){
	int k;
	cin>>k;
	string s1,s2;
	cin>>s1>>s2;
	cout<<process(s1,k)*process(s2,k)<<"\n";
	
}
