#include <bits/stdc++.h>
using namespace std;
void selection_sort(int arr[] , int n){
    for(int i=0;i<n-1;i++){
        int minpos =i;
        for(int j=i+1;j<n;j++){
            if(arr[minpos]>arr[j]){
                minpos=j;
            }
        }
        swap(arr[i],arr[minpos]);
    }
}
int main(){
    int arr[] = {5,6,2,1,6,7,2};
    int n = sizeof(arr)/sizeof(int);
    selection_sort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}