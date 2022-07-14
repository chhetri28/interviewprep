// Count distinct elements in every window
#include <bits/stdc++.h>
using namespace std;
void solve(vector<int> a, int k)
{
    // code here.
    vector<int> res;
    int i = 0, j = 0;
    int n = a.size();
    unordered_map<int, int> mp;
    while (j < n)
    {
        // Add element with it's count in the map one by one
        mp[a[j]]++;
        // move j
        if (j - i + 1 < k)
            j++;
        // once window size hits
        else if (j - i + 1 == k)
        {
            // add the size of map to res
            res.push_back(mp.size());
            // remove the last element
            mp[a[i]]--;
            // if the last element count is 0 remove it from map
            if (mp[a[i]] == 0)
            {
                mp.erase(a[i]);
            }
            // move i and j
            i++;
            j++;
        }
    }
    for (auto i : res)
    {
        cout << i << " ";
    }
}
int main()
{
    vector<int> nums = {2, 3, 1, 2, 4, 3};
    int k = 7;
    solve(nums, k);
}
