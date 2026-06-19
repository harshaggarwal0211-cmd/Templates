// 2p form 3 
//https://cses.fi/problemset/task/1084
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int n , m ,k; cin>>n>>m>>k;
    vector<int> a(n);
    vector<int> b(m);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int ans=0;
    int t1=0 ; int t2=0;
    
    while(t1<n&&t2<m){
        if(a[t1]-k>b[t2]){
            t2++;
        }
        else if(a[t1]+k<b[t2]){
            t1++;
        }
        else{
            ans++;
            t1++; 
            t2++;
        }
    }
    cout<<ans<<endl;
}
