#include <bits/stdc++.h>
#define ll long long

using namespace std;


int main () {
   string s,t;
   cin>>s;
   for(int i = 0; i<6; i++){
      t+=s;
   }
   cout<<t.substr(0,6)<<"\n";
}