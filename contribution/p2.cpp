//inversion ++ == if a(i)>a(j) if i<j , decreasing element
#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int n ; cin>>n;
    vector <int > a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int inv =0;
    // for(int i=0;i<n;i++){
    //     for(int j=i+1;j<n;j++){
    //         if(a[i]>a[j]) inv++;
    //     }
    // }
    
    cout<<inv;
}