#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define endl '\n'
vector<vector<int>> adj;
vector<int> visited;
vector<int> comp;
void dfs(int x, int comp_no){
    visited[x]=1;
    comp[x]=comp_no;
    for(auto c : adj[x]){
        if(!visited[c]){
            dfs(c,comp_no);
        }
    }
}
void solve(){
    int n ,m ,q; cin>>n>>m>>q;
    adj.resize(n+1);
    visited.assign(n+1,0);
    comp.assign(n+1,0);
    while(m--){
        int u , v ; cin>>u>>v;
        adj[v].push_back(u);
        adj[u].push_back(v);
    }
    int cn=0;
    for(int i=1;i<=n;i++){
        if(!visited[i]){
            cn++;
            dfs(i,cn);
        }
    }
    vector<int> comp_size(cn+1);
    for(int i=1;i<=n;i++){
        comp_size[comp[i]]++;
    }
    while(q--){
        int a ; cin>>a;
        if(a==1){
            int x ; cin>>x;
            cout<<comp_size[comp[x]]<<endl;
        }
        else {
            int x ,y ; cin>>x>>y;
            if(comp[x]==comp[y]) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    solve();
}