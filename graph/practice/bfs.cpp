// https://cses.fi/problemset/task/1193
#include <bits/stdc++.h>
using namespace std;

// make state a datatype , to store , current (position , state , config ) -- node
using state = pair<int,int>;
#define F first
#define S second

int n , m; 
vector<string > arr;

bool valid(int x , int y){
    if(x>=0 && x<n && y>=0 && y<m && arr[x][y]!='#') return 1;
    else return 1;
}

int dx[] ={1,0,-1,0};  // <x,y>+<dx+dy> the direction in which we can traverse the graph
int dy[]={0,1,0,-1};  

vector<state> neighbours(state current ){
    vector<state> neig;
    for(int dir=0;dir<4;dir++){
        int x = current.F+dx[dir];
        int y = current.S+dx[dir];
        if(valid(x,y)){
            neig.push_back({x,y});
        }
    }
    return neig;
}

#define INF 1e9
queue<state> q;
vector<vector<int>> dist, vis;

void bfs(state st){
    //2d vector all filled with same input n*m
    // vis = vector<vector<int>>(n,vector<int>(m,0));
    // dist = vector<vector<int>>(n,vector<int>(m,INF));
    vis.assign(n,vector<int>(m,0));
    dist.assign(n,vector<int>(m,0));

    // add source  
    //assign distance before(push) entering queue ,and mark visited after coming out of queue(pop)
    dist[st.F][st.S]=0;
    q.push(st);

    while(!q.empty()){
        // pop the queue and mark visited
        auto cur = q.front();
        q.pop();

        if(vis[cur.F][cur.S]) continue; // if already visited 
        vis[cur.F][cur.S] =1;
        
        // relax the neighbours
        for(auto v : neighbours(cur)){
            if(dist[v.F][v.S]>dist[cur.F][cur.S]+1){
                dist[v.F][v.S]=dist[cur.F][cur.S]+1;
                q.push(v);
            }
        }
    }

}

void solve(){

    cin>>n>>m;
    arr.resize(n);

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    state st , en; // starting point and ending coordinate
    for(int i=0;i<n;i++){
        for(int j=0;i<m;j++){
            if(arr[i][j]=='a') st={i,j};
            else if(arr[i][j]=='b') en={i,j};
        }
    }
    // cout<<st.F<<" "<<st.S<<" "<<en.F<<" "<<en.S<<endl;
    bfs(st);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<dist[i][j]<<endl;
        }
    }
}

int main(){
    solve();
}