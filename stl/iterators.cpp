#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v ={1,2,3,4,5};
    //v.begin() points to 1 , vend to just next of 5
    // v.rbegin to 5 , ,v.rend to just before 1 
    for(auto x:v){
        cout<<x<<" ";
    }
    for(auto it =v.begin() ; it!=v.end() ; it++){
        cout<<*it<<" ";
    }
    map<int,string> mp;
    mp[1] = "A";
    mp[2] = "B";
    for(auto it = mp.begin(); it != mp.end(); it++) {
        cout << it->first << " ";
        cout << it->second << endl;
    }
}