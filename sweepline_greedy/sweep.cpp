// can be called as one pointer
// # of subarray with all 1;
// # of subarray atleast 1 == total (n*n-1/2) - all 0
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=8;
    int arr[n]={1,0,1,1,0,0,1,0};
    int ans =0 ; int last=0;
    for(int i=0;i<n;i++){
        if(arr[last]==1) last++;
        else last =0;
        ans+=last;
        /*else{
        ans+=last*(last+1)/2
        last=0
        }*/ // add ans+=l*(l+1)/2 in last
    }
    cout<<ans;
}