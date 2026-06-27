#include <bits/stdc++.h>
using namespace std;
int n , m ;
const int INF = 1e9;
void solve(){
    cin>>n>>m;
    int dist[n+1][n+1];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            dist[i][j]=INF;
            dist[j][i]=INF;
            if(i==j) dist[i][j]=0;
        }
    }
    while(m--){
        int a , b ,c ; cin>>a>>b>>c;
        dist[a][b]=min(dist[a][b],c);
        dist[b][a]=min(dist[b][a],c);
    }
    for(int k=1;k<=n;k++){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                dist[i][j]=min(dist[i][k]+dist[k][j],dist[i][j]);
            }
        }
    }
}
int main(){
    // n--node , m--edges
    solve();
}