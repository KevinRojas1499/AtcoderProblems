#include <bits/stdc++.h>
#define ll long long

using namespace std;

const ll MOD = 998244353;

char next(char c){
    if(c == 'A') return 'B';
    else if (c == 'B') return 'C';
    else return 'A';
}

int main(){
    string s;
    cin>>s;
    ll q,t,k;
    cin>>q;
    while(q--){
        cin>>t>>k;
        k--;
        vector<ll> decisions;
        while(k && t){
            if(k%2 == 0) decisions.push_back(0);
            else decisions.push_back(1);
            t--;
            k/=2;
        }
        reverse(decisions.begin(),decisions.end());
        if(k == 0){
            t = (t%3+3)%3;
            char c = s[0];
            if (t == 1) c = next(s[0]);
            else if (t == 2) c = next(next(s[0]));

            for(int i = 0; i<(ll) decisions.size(); i++){
                if(decisions[i]) c = next(next(c));
                else c = next(c);
            }
            cout<<c<<"\n";
        }
        else{
            char c = s[k];
            for(int i = 0; i<(ll) decisions.size(); i++){
                if(decisions[i]) c = next(next(c));
                else c = next(c);
            }
            cout<<c<<"\n";
        }
    }
}