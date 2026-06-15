#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define all(x) x.begin(), x.end()
#define M_PI 3.14159265358979323846
#define endl '\n'
#define MOD 1000000007
#define forn(i, n) for (int i = 0; i < n; i++)
// #define pb push_back

struct decreasing
{
    deque<int> dq;

    void insert(int x)
    {
        while (!dq.empty() && dq.back() < x) dq.pop_back();
        dq.push_back(x);
    }

    void erase(int x)
    {
        if (dq.front() == x) dq.pop_front();
    }

    int getmax() 
    {
        return dq.front();
    }

};

void solve() 
{
    int n, k;
    cin >> n >> k;

    int arr[n];
    forn(i, n) cin >> arr[i];

    decreasing d;

    for (int i = 0; i < n; i++)
    {
        d.insert(arr[i]);
        if (i >= k) d.erase(arr[i - k]);
        if (i >= k - 1) cout << d.getmax() << " ";
    }
    cout << endl;

}
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t = 1;
    cin >> t;
    while (t--)
        solve();
 
    return 0;
}