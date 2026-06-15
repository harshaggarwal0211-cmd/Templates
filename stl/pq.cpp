#include <bits/stdc++.h>
using namespace std;
int main(){
    priority_queue<int> pq; // max heap
    pq.push(1); 
    pq.empty();
    pq.pop();
    pq.top(); // returns the maximum of all element provided
    pq.size();

    // min heap
    priority_queue<int , vector<int>, greater<int>> mpq;
    // same operations as above , 
    // mps.top() will return minimum of all elements
}