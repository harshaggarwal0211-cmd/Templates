//given n segments of [li,ri] , find # person >=k at a time 
// k ==1 union , for intersection , ({min(ai),max(bi)})
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
signed main(){
    int n ,k ; cin>>n>>k;
    vector<pair<int,int>> event;
    while(n--){
        int l , r ; cin>>l>>r;
        event.push_back({l,+1});
        event.push_back({r,-1});
    }
    sort(event.begin(),event.end());
    int cnt=0; int ans=0;
    for(int i=0;i<event.size();i++){
        cnt += event[i].second;
        if(i+1<n && cnt>=k){
            ans+=event[i+1].first-event[i].second;
        }
    }
    cout<<ans;
}