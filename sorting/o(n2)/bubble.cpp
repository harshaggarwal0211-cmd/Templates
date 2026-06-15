#include <bits/stdc++.h>
using namespace std;
void bubble_sort(int arr[] , int n){
    for(int j=0;j<n-1;j++){
        for(int i=0;i<n-1-j;i++){
            if(arr[i]>arr[i+1]){
                swap(arr[i],arr[i+1]);
            }
        }
    }
}
int main(){
    int arr[] = {5,6,2,1,6,7,2};
    int n = sizeof(arr)/sizeof(int);
    bubble_sort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}