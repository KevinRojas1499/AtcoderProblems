#include <bits/stdc++.h>
#define ll long long

using namespace std;

const ll LEFT = 0, DOWN = 1, RIGHT = 2, UP = 3;

int main(){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll x = 0, y = 0, orientation = 0;
    
    for(int i = 0; i<n; i++){
        if(s[i] == 'R') {
            orientation++;
            if(orientation == 4) orientation = 0;
        }
        else{
            if(orientation == LEFT) x++;
            else if(orientation == UP) y++;
            else if(orientation == RIGHT) x--;
            else y--;
        }
    }
    cout<<x<<" "<<y<<"\n";
}