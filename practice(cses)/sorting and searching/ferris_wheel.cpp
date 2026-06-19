//https://cses.fi/problemset/task/1090
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int n ,x; cin>>n>>x;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    int ans=0;
    int lo=0 ; int hi=n-1;
    while(lo<=hi){
        if(a[lo]+a[hi]>x){
            hi--;
            ans++;
        }
        else {
            ans++; lo++ ; hi--;
        }
    }
    cout<<ans;
}
