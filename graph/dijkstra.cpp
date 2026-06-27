#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long 
int n , m; 
vector<vector<pair<int,int>>> adj;
#define F first
#define S second
const int INF =1e9;

vector<int> visited;
vector<int> dist;
void dijkstra(int sc){
    priority_queue<pair<int,int>> q; /////////////////
    visited.assign(n+1,0);
    dist.assign(n+1,INF);

    dist[sc]=0;
    q.push({-0,sc}); ////////////////

    while(!q.empty()){
        int curr = q.top().S; ////////
        q.pop(); /////////////

        if(visited[curr]) continue;
        visited[curr]=1;

        for(auto x : adj[curr]){
            if(!visited[x.F] && dist[x.F]>dist[curr]+x.S){
                    dist[x.F]=dist[curr]+x.S;
                    q.push({-dist[x.F],x.F}); //////////////
            }
        }
    }
}

void solve(){
    cin>>n>>m;
    adj.resize(n+1);
    while(m--){
        int x , y ,z ; cin>>x>>y>>z;
        adj[x].push_back({y,z});
        adj[y].push_back({x,z});
    }

}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    solve();
}