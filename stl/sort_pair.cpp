#include <bits/stdc++.h>
using namespace std ;
bool cmp(pair<int,int> a, pair<int,int> b){
    return a.second<b.second;
}
int main(){
    vector<pair<int,int>> a;
    for(auto &x:a) cin>> x.first>> x.second;
    // sort based on first element
    sort(a.begin(),a.end());
    // sort based on 2nd element
    sort(a.begin(),a.end(),greater<int>());

    sort(a.begin(),a.end(),cmp);

}