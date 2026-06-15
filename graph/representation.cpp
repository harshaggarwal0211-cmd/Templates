#include <bits/stdc++.h>
using namespace std;
// tc , sc = O(n+2m)
vector<vector<int>> adj;
int main(){
    // n--node , m--edges
    int n , m ; cin>>n>>m;
    adj.resize(n+1);
    while(m--){
        int u , v ; cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(v); // if graph is undirected
    }
}