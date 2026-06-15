#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[] = {1,3,2,1};
    int ans=0;
    int n = sizeof(a)/sizeof(int);
    // for(int i=0;i<n;i++){
    //     for(int j=i+1;j<n;j++){
    //         for(int k=j+1 ;k<n;k++){
    //             ans+=a[i]+a[j]+a[k];
    //         }
    //     }
    // }  
    // it has tc =O(n3)
    //every number has a contribution of n-1c2 times
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
    }
    ans=sum*(n-2)*(n-1)/2;
    cout<<ans;
}