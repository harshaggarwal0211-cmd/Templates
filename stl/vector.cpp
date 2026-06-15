#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    vector<int> v1(5); //0,0,0,0,0
    //vector<int> v(v1); //v=v1
    //vector<int> v2(5,10) 10,10,10,10,10
    //v.push_back(a); 
    // v.emplace_back(a);
    // v.pop_back;
    // v.clear();
    // v.empty(); is empty or not
    //v.size();
    sort(v.begin(),v.end()); //sort(v.begin(),v.begin()+n)
    // sort(v.rbegin(),v.rend()); in desending order
    //sort(v.begin(), v.end(), greater<int>());
    reverse(v.begin(),v.end());
    max_element(v.begin(),v.end());
    for(auto x:v){
        cout<<x<<" ";
    }
    // to take input in vector use , value in refrence
    //vector<pair<int,int>> v(n);
    //for(auto &[x,y]:v){
//    cin>>x>>y;
  //  }
        // for(auto &p:v){
        //     cin>>p.first>>p.second;
        // }
}