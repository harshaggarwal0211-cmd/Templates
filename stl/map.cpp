#include <bits/stdc++.h>
using namespace std;
int main(){
    map<int , string > mp;
    // key -> value 
    mp[1]="hello";
    mp.insert({2,"Hii"});
    cout<<mp[1]; //hello
// | `mp[key]`    | access/insert   |
// | `insert()`   | insert pair     |
// | `erase(key)` | delete          |
// | `find(key)`  | iterator        |
// | `count(key)` | 0 or 1          |
// | `size()`     | number of pairs |
// | `empty()`    | check empty     |
// | `clear()`    | remove all      |

    for(auto &it : mp) {
        cout << it.first << " ";
        cout << it.second << endl;
    }
    auto itFind = mp.find(1);
    if (itFind != mp.end()) {
        cout << "Charlie's age is " << itFind->second << endl;
    }

}