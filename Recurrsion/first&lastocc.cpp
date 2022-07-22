#include <bits/stdc++.h>
using namespace std;


int first(std::vector<int> v, int index, int target)
{
    if (index == v.size() - 1)
        return -1;

    if (v[index] == target)
        return index + 1;

    return first(v, index + 1, target);
}

int last(std::vector<int> v, int index, int target)
{
    if (index == 0)
        return -1;

    if (v[index] == target)
        return index + 1;

    return last(v, index - 1, target);
}

void solve()
{
    vector<int> a = {1, 2, 3, 4, 5, 3, 2};
    int target = 6;
    cout << first(a, 0, target) << endl;
    cout << last(a, a.size() - 1, target);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("error.txt", "w", stderr);
    freopen("output.txt", "w", stdout);
#endif

    int t;
    cin >> t;
    while (t--)
    {
        solve();
        cout << "\n";
    }

    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}
