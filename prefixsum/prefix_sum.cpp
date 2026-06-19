#include <bits/stdc++.h>
using namespace std;
int main(){
    // try to convert l , r in 0 based indexing
    int n ; cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int prefix[n+1];
    prefix[0]=0;
    prefix[1]=arr[0];
    for(int i=2;i<n;i++){
        prefix[i]=prefix[i-1]+arr[i-1];
    }
    int l , r ; cin>>l>>r;
    l--; // iff l,r is in 1 based indexing 
    // for query from l to r 
    cout<<prefix[r]-prefix[l];
}
// #include<bits/stdc++.h>
// using namespace std;

// const int N = 2e5 + 9;
// long long pref_sum[N];
// int a[N];
// int32_t main() {
//   ios_base::sync_with_stdio(0);
//   cin.tie(0);
//   int n, q; cin >> n >> q;
//   for (int i = 1; i <= n; i++) {
//     cin >> a[i];
//   }
//   for (int i = 1; i <= n; i++) {
//     pref_sum[i] = pref_sum[i - 1] + a[i];
//   }
//   while (q--) {
//     int l, r; cin >> l >> r;
//     cout << pref_sum[r] - pref_sum[l - 1] << '\n';
//   }
//   return 0;
// }
// // https://cses.fi/problemset/task/1646/
