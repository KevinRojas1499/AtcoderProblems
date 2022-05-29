#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll n;
bool in(ll x, ll y){
    return 0<=x && x<n && 0<= y && y<n;
}

int main(){
    cin>>n;
    char mat[n+2][n+2];
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            cin>>mat[i][j];
        }
    }
    ll dirX [4] = {1,0,1,-1};
    ll dirY [4] = {0,1,1, 1};
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            for(int k = 0; k<4; k++){
                ll count = 0;
                int l = 0;
                for(l = 0; l<6; l++){
                    ll x = i+l*dirX[k], y = j+l*dirY[k];
                    if(in(x,y) && mat[x][y] == '#') count++;
                    if(!in(x,y)) break;
                }
                if(count >=4 && l == 6) {
                    cout<<"Yes\n";
                    return 0;
                }
            }
        }
    }
    cout<<"No\n";
}