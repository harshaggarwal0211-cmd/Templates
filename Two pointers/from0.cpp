// sliding window
// of fixed k lenght window
// in o(n.k)
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long 
signed main(){
    int n , k; cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // find min in every k lenght window
    // o(nlogk)
    // multiset<int> mt ;
    // for(int i=0;i<n;i++){
    //     mt.insert(arr[i]);
    //     if((i-k)>=0) mt.erase(mt.find(arr[i-k]));
    //     if(mt.size()==k) cout<<*mt.begin()<<endl;
    // }
}