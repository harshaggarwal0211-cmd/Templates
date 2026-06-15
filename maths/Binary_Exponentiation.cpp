#include <bits/stdc++.h>
using namespace std;
#define int long long
int mod = 1e9+7;
int modinv(int a, int m){
  // mod( inverse of (1/a)%m == a^m-2%mod , if m is prime using fermat little theorem
  return binpow(a,m-2);
}
int binpow(int a , int b){
  if(b==0) return 1;
  else if(b%2!=0) return a*binpow(a,b-1)%mod;
  else {
    int temp; temp = binpow(a,b/2)%mod;
    return temp*temp%mod;
  }
}
signed main(){
  int a, b; cin>>a>>b;
  cout<<binpow(a,b);
}


// #include<bits/stdc++.h>
// using namespace std;

// const int mod = 1e9 + 7;

// int power(int x, long long n) { // O(log n)
//   int ans = 1 % mod;
//   while (n > 0) {
//     if (n & 1) {
//       ans = 1LL * ans * x % mod;
//     }
//     x = 1LL * x * x % mod;
//     n >>= 1;
//   }
//   return ans;
// }

// int32_t main() {
//   ios_base::sync_with_stdio(0);
//   cin.tie(0);
//   cout << power(2, 1000000000) << '\n';
//   return 0;
// }