#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll h,w,n,gx,gy,sx,sy,x,y;

map<pair<ll,ll>, bool> seen;
map<ll, set<ll>> hor, ver;
map<pair<ll,ll>,ll> dist;
ll dx [4] = {1,-1,0, 0};
ll dy [4] = {0, 0,1,-1};

ll in(ll a, ll b){
    return 1<= a && a<n && 1<=b && b<n;
}

int main(){
    cin>>h>>w>>n;
    cin>>sx>>sy;
    cin>>gx>>gy;
    for(int i = 0; i<n; i++){
        cin>>x>>y;
        ver[y].insert(x);
        hor[x].insert(y);
    }


    queue<pair<ll,ll>> q;
    q.push({sx,sy});
    seen[{sx,sy}] = 1;
    dist[{sx,sy}] = 0;
    bool possible = false;
    while(q.size()){
        auto c = q.front();
        q.pop();
        ll a = c.first, b = c.second;
        // cout<<a<<" "<<b<<" "<<dist[{a,b}]<<"\n";
        if(a == gx && b == gy){
            possible = true;
        }
        ll d = dist[{a,b}];
        
        auto it = hor[a].lower_bound(b);
        if(it  != hor[a].begin()){
            it--;
            ll v = *it+1;
            if(!seen[{a,v}]){
                q.push({a,v});
                dist[{a,v}] = 1+d;
                seen[{a,v}] = 1;
            }
        }
        it = hor[a].upper_bound(b);
        if(it != hor[a].end()){
            ll v = *it-1;
            if(!seen[{a,v}]){
                q.push({a,v});
                dist[{a,v}] = 1+d;
                seen[{a,v}] = 1;
            }
        }
        it = ver[b].lower_bound(a);
        if(it != ver[b].begin()){
            it--;
            ll v = *it+1;
            if(!seen[{v,b}]){
                q.push({v,b});
                dist[{v,b}] = 1+d;
                seen[{v,b}] = 1;
            }
        }
        it = ver[b].upper_bound(a);
        if(it!=ver[b].end()){
            ll v = *it-1;
            if(!seen[{v,b}]){
                q.push({v,b});
                dist[{v,b}] = 1+d;
                seen[{v,b}] = 1;
            }
        }
    }
    if(possible){
        cout<<dist[{gx,gy}]<<"\n";
    }
    else{
        cout<<"-1\n";
    }

}