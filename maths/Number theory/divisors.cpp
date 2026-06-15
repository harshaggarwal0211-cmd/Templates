#include <bits/stdc++.h>
using namespace std;
#define int long long
int mod =1e9+7;
//gcd O(min(a,b))
int gcd(int a ,int b){
    if(b==0) return a;
    return gcd(b,a%b);
}
// finding divisors o(sqrtn)
void number_of_factors(int n ){
    int cnt =0;
    for(int i =1 ;i*i<=n;i++){
        if(n%i==0&&i*i!=n) {
            cnt+=2;
            cout<<i<<" "<<n/i<<" ";
        }
        else if(i*i==n) {
            cnt++;
            cout<<i<<" ";
        }
    }
    cout<<cnt<<endl;
}
//in o(sqrtn) for 10^12 > n > 10^6
void print_factorization(int n){
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            int ex=0;
            while(n%i==0){
                ex++ ; n=n/i;
            }
            cout<<i<<" "<<ex<<endl;
        }
    }
    if(n!=1) cout<<n<<" "<<"1"<<endl;
}
//in o(logn) for n<10^6 , by using sieve erathathens
void sieve(int n ){
    vector<int> a(n+1,true);
    a[0]=a[1]=false;
    for(int i=2;i*i<=n;i++){ //i<=n
        if(a[i]){
            for(int j=i*i;j<=n;j++){ //j=2i
                a[j]=false;
            }
        }
    }
}
//finding divisor count oin O(nlogn)
vector<int> divisor_count(int n){
    vector<int> a(n+1,0);
    for(int i=0;i<=n;i++){
        for(int j=i;j<=n;j++){
            a[j]++;
        }
    }
    return a;
}
//finding divisor sum oin O(nlogn)
vector<int> sum(int n){
    vector<int> a(n+1,0);
    for(int i=0;i<=n;i++){
        for(int j=i;j<=n;j++){
            a[j]+=i;
        }
    }
    return a;
}
signed main() {
    
}
