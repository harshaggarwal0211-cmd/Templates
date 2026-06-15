#include <bits/stdc++.h>
using namespace std;
int main(){
    //first in first out fifo
    queue<int> q;
    q.push(1);
    q.push(2);
    q.pop(); // remove 1 fist
    cout<<q.front()<<" ";  //first element
    cout<<q.back()<<" ";
    // q.size();
    // q.empty();
    while(!q.empty()) {
    cout << q.front() << " ";
    q.pop();
    }
}