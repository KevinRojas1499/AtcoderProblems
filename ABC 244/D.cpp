#include <bits/stdc++.h>
#define ll long long

using namespace std;

bool isPermutationEven(string s){
    if(s == "RGB" || s == "BRG" || s == "GBR") return true;
    else return false;
}

int main(){
    vector<char> s(3),t(3);
    for(int i = 0; i<3; i++) cin>>s[i];
    for(int i = 0; i<3; i++) cin>>t[i];

    string s1 = "";
    s1+=s[0];
    s1+=s[1];
    s1+=s[2];
    string s2 = "";
    s2+=t[0];
    s2+=t[1];
    s2+=t[2];
    if(isPermutationEven(s1) == isPermutationEven(s2)){
        cout<<"Yes\n";
    }
    else{
        cout<<"No\n";
    }

}