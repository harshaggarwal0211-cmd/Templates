#include <bits/stdc++.h>
using namespace std;
int main(){
    stack<int> st;
    //lifo last in first out 
    //st.push(x)
    //st.pop() remove last element added ( top element )
    //st.top() access top element 
    //st.empty() check if empty
    //st.size() 
    //does not support iterators
    while(!st.empty()) {
    cout << st.top() << " ";
    st.pop();
    }
    
}