#include <bits/stdc++.h>
using namespace std;
int main(){
    set<int> s; // stores unqiue , in a increasing order
    unordered_set<int> ust; // stored in random order 
    s.insert(1);
    s.erase(1);
    s.find(1);   // s.find(20)!=s.end() -> there exists the element
    s.count(1);
    s.lower_bound(1);
    s.upper_bound(1);
    s.begin();
    s.rbegin();
    multiset<int> mst; // can store multiple  in sorted order
//     auto it = mst.find(x); // to remove only 1 x;
// if(it != mst.end())
//     mst.erase(it);
}
