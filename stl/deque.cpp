// double ended queue , can be accessed as vector
#include <bits/stdc++.h>
using namespace std;
int main(){
    deque <int> q;
    q.push_back(1);
    q.push_front(2);
    q.pop_back(); // remove 1 fist
    q.pop_front();
    cout<<q.front()<<" ";  //first element
    cout<<q.back()<<" ";
    // q.size();
    // q.empty();
    while(!q.empty()) {
    cout << q.front() << " ";
    // q.pop();
    }
}