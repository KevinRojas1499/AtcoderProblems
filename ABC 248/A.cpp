#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    set<char> s;
    for(int i = 0; i<=9; i++) s.insert(('0'+i));
    string s1;
    cin>>s1;
    for(auto c : s1){
        s.erase(c);
    }
    cout<<*s.begin()<<"\n";
}