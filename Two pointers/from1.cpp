/*find the _____ satisfying a (criteria)*/
/* number of sa , max len sub . min len sub , sum of all sub , sum of len of all sub*/
/*pointers move in same direction , if (l,r) satisfy , then => (l+1,r) should satisfy*/
// find max lenght subarray with atmost k zeros 

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n ; 
    // both pointers move in same direction . 
    // if (l,r) satisfy and (l+1,r) also satisfy
    // 1. eat as much as u can , 2. update the ans , 3. tail ++
    int tail=0; int head =-1;
    while(tail<n){
        while( head+1<n /*(arr[head+1]) && condn*/){
            head++;
            //move head away , add arr[head]
        }
        // update the ans , ans = mz( ans , head -tail+1)
        // number of subarray , ans+= head-tail+1
        if(tail<=head){
            // remove arr[tail]
            tail++;
        }
        else{
            tail++;
            head = tail-1;
        }
    }
}



// #include <bits/stdc++.h>
// using namespace std;
// #define int long long 
// int mod = 1e9+7;
// #define endl '\n'
// signed main(){
//     ios_base::sync_with_stdio(0);
//     cin.tie(0); cout.tie(0);
//     int n, k; ; cin>>n>>k;
//     int arr[n]; 
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     /*while(tail<n){
//     1. eat as much as possible , 2. update the ans , 3. tail++
//     }*/
//    int tail =0; int head =-1;
//    int ans =0; int cnt0=0;
//    while(tail<n){
//     // eat as much as u can 
//     while( head+1<n && (cnt0<=k||arr[head+1]==1)/*if we can eat*/){
//         head++;
//         if(arr[head]==0) cnt0++;
//     }
//     //update the ans 
//     ans = max(ans , head -tail+1); // ans += head-tail+1 , count number of valid subarray
//     // tail ++
//     if(tail<=head){
//         if(arr[tail]==0) cnt0--;
//         tail++;
//     }
//     else{               
//         tail++;
//         head = tail-1;
//     }
//    }
//    cout<<ans;
// }