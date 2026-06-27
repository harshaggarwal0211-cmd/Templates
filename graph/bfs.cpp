// https://cses.fi/problemset/task/1193
// node - state/ config , edge - direction in which we can move
#include <bits/stdc++.h>
using namespace std;
#define F first
#define S second
using state = pair<int,int>;
vector<string> a;
int n ,m ;
// bool valid(state a){
//     if(a.F>=0&&a.F<n&&a.S>=0&&a.S<n&&a.F!='#'&&a.S!='#'){
//         return true ;
//     }
//     else return true;
// }
bool valid(int x , int y){
    if(x>=0 && x<n && y>=0 && y<n && a[x][y]!='#' ) return true ;
    return false;
}

int dx[] = { 1,0,-1,0};
int dy[] = {0,1,0,-1};
vector<state> neighbour( state curr){
    vector<state> child;
    for(int dir=0;dir<4;dir++){
        int x = curr.F + dx[dir];
        int y = curr.S+ dy[dir];
        // if(valid(curr.F+dx[dir],curr.S+dy[dir])){
        //     child.push_back({curr.F+dx[dir],curr.S+dy[dir]});
        // }
        if(valid(x,y)) child.push_back({x,y});
    }
    return child;
}

vector<vector<int>> visited ;
vector<vector<int>> dist ;
queue<state> q;
const int INF = 1e9;

void bfs(state st){
    visited.assign(n,vector<int>(m,0)) ;
    dist.assign(n,vector<int>(m,INF)) ;

    // assign distance before push in queue , and mark it visited after pop out from queue
    // add source
    dist[st.F][st.S]=0;
    q.push(st);

    while(!q.empty()){

        state curr = q.front(); // take out the first element 
        q.pop(); 

        // check if it is visited , if not mark it as visited
        if(visited[curr.F][curr.S]) continue;
        visited[curr.F][curr.S] =1;

        // relax the neighbour
        for( auto v : neighbour(curr)){
            if(dist[v.F][v.S]>dist[curr.F][curr.S]+1){
                dist[v.F][v.S]=dist[curr.F][curr.S]+1;
                q.push(v);
            }
        }
    }
}

void solve(){
    cin>>n>>m;
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



// #include<bits/stdc++.h>
// using namespace std;

// using state = pair<int,int>;
// #define F first
// #define S second


// int n,m;
// vector<string> arr;

// bool valid(int x,int y){
//     if(x>=0 && x<n && y>=0 && y<m && arr[x][y]!='#')return 1;
//     return 0;
// }

// int dx[] = {1,0,-1,0};
// int dy[] = {0,1,0,-1};
// vector<state> neighbours(state cur){
//     vector<state> neigh;
//     for(int dir=0;dir<4;dir++){
//         int nx = cur.F + dx[dir];
//         int ny = cur.S + dy[dir];
//         if(valid(nx,ny)){
//             neigh.push_back({nx,ny});
//         }
//     }
//     return neigh;
// }

// #define INF 100
// queue<state> q;
// vector<vector<int>> vis, dist;
// vector<vector<state>> par;

// void bfs(state st){
//     vis.assign(n,vector<int>(m,0));
//     dist.assign(n,vector<int>(m,INF));
//     par.assign(n,vector<state>(m,{-1,-1}));

//     // Add the source
//     dist[st.F][st.S]=0;
//     q.push(st);

//     while(!q.empty()){
//         // Pop from queue and mark visited.
//         state cur = q.front();
//         q.pop();

//         if(vis[cur.F][cur.S])continue;
//         vis[cur.F][cur.S]=1;

//         // Relax the neighbours.
//         for(auto v:neighbours(cur)){
//             if(!vis[v.F][v.S] && dist[v.F][v.S] > dist[cur.F][cur.S] + 1){
//                 dist[v.F][v.S] = dist[cur.F][cur.S] + 1;
//                 par[v.F][v.S] = cur;
//                 q.push(v);
//             }
//         }
//     }
// }


// void solve(){
//     cin>>n>>m;
//     arr.resize(n);
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     state st,en;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             if(arr[i][j]=='A'){
//                 st = {i,j};
//             }else if(arr[i][j]=='B'){
//                 en = {i,j};
//             }
//         }
//     }

//     bfs(st); // SSSP
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cout<<dist[i][j]<<"\t";
//         }
//         cout<<endl;
//     }

//     if(vis[en.F][en.S]){
//         cout<<"YES\n";
//         cout<<dist[en.F][en.S]<<endl;

//         // find the path
//         state cur=en;
//         vector<state> path;
//         while(cur!=make_pair(-1,-1)){
//             path.push_back(cur);
//             cur = par[cur.F][cur.S];
//         }
//         reverse(path.begin(),path.end());
//         for(auto v:path){
//             cout<<v.F<<" "<<v.S<<endl;
//         }

//     }else{
//         cout<<"NO\n";
//     }



//     // cout<<st.F<<" "<<st.S<<endl;
//     // cout<<en.F<<" "<<en.S<<endl;
// }

// signed main(){
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);cout.tie(0);
//     int t=1;
//     //cin>>t;
//     while(t--){
//         solve();
//     }
// }