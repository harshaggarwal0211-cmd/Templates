// https://cses.fi/problemset/task/1193
#include <bits/stdc++.h>
using namespace std;
#define F first
#define S second
using state = pair<int,int>;
vector<string> a;

void solve(){
    int n ,m ; cin>>n>>m;
    a.resize(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    state st , en ;
    for(int i=0;i<n;i++){
        for(int j=0;i<m;j++){
            if(a[i][j]=='A') st ={i,j};
            else if (a[i][j]=='B') en ={i,j};
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    solve();
}