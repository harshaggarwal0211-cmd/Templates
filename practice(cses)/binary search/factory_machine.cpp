//https://cses.fi/problemset/task/1620?utm_source=chatgpt.com
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

bool check(const vector<int> &a , int mid , int k){
    int product =0;
    for(auto x:a){
        product+=mid/x;
        if(product>=k){
            return true;
        }
    }
    return false;
}

void solve(){
    int n , t ; cin>>n>>t;
    vector<int> a(n);
    for(auto &x : a ) cin>>x;
    sort(a.begin(),a.end());
    int lo =1 ;
    int hi =1e9;
    int ans ;
    while(lo<=hi){
        int mid = lo+(hi-lo)/2;
        if(check(a,mid,t)){
            mid = ans ;
            hi = mid-1;
        }
        else{
            lo= mid+1;
        }
    }
    cout<<ans<<endl;
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    // int t ; cin>>t;
    // while(t--){
        solve();
    // }
}