#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    string s;
    cin>>s;
    set<char> c;
    bool possible = true, lowercase = false, uppercase = false;
    for(auto ch : s){
        if(c.find(ch) != c.end()) possible = false;
        if('a'<= ch && ch <= 'z') lowercase = true;
        if('A'<= ch && ch<= 'Z') uppercase = true;
        c.insert(ch);
    }
    if(possible && uppercase && lowercase) cout<<"Yes\n";
    else cout<<"No\n";


}