#include <bits/stdc++.h>
using namespace std;
vector<int> a; int n; 
// lccm level choice check move
void rec(int level){
    // BASE CASE: All levels processed
    if (level == target_level) {
        // Found a valid solution
        print/process solution;
        return;
    }
    
    // For all possible choices at this level
    for (auto ch : choices) {
        if (check(ch, level)) {          // Pruning: Is this choice valid?
            // MOVE: Make the choice
            place(ch, level);            // Place the choice
            rec(level + 1);              // Recurse to next level
            unplace(ch, level);          // Backtrack: Undo the choice
        }
    }
}

int main(){
    rec(0);
}