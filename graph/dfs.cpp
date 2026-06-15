#include <bits/stdc++.h>
using namespace std;

// tc , sc = O(n+2m)
vector<vector<int>> adj;
vector<int> visited;

void dfs(int x){
    visited[x]=1;
    for(auto child : adj[x]){
        if(!visited[child]){
            dfs(child);
        }
    }
}

int main(){
    // n--node , m--edges
    int n , m ; cin>>n>>m;
    adj.resize(n+1);
    visited.resize(n+1,0);
    while(m--){
        int u , v ; cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(v); // if graph is undirected
    }
    // node
    int x ; cin>>x;
    dfs(x);
}