#include <bits/stdc++.h>
using namespace std;
int main(){
    // int a[] ={5,3,2,5,1,6,9,10};
    // int n =sizeof(a)/sizeof(int);
    // sort(a,a+n);
    vector<int> a ={1,2,3,3,4,5,5,6,6,7};
    // these all gives ans in O(logn)


    //lower_bound(a.begin(),a.end(),x) -> iterator points to first element >=x
    // lb-a.begin(); index of first element >=x ; 
    //# of elements <x


    //upper_bound(a.begin(),a.end(),x) -> iterator points to first element >x
    // ub-a.begin(); index of first element >x ; 
    //# of elements <=x

    //number of elements ==x //ub-lb

    auto it = lower_bound(a.begin(),a.end(),3); //for vector array deque 
    // for set multiset map st.lower_bound(x) no -st.begin() is avaible 
    cout<< * it <<endl; //3
    it--;
    cout<<*it<<endl; //2
    //to find index 
    cout<<it-a.begin()<<endl;
}
