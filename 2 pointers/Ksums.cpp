/*

If you have already read and implement the 3sum and 4sum by using the sorting approach:
reduce them into 2sum at the end, you might already got the feeling that,
all ksum problem can be divided into two problems:

--->2sum Problem
--->Reduce K sum problem to K – 1 sum Problem

Therefore, the ideas is simple and straightforward.
We could use recursive to solve this problem. Time complexity is O(N^(K-1)).
*/

#include <bits/stdc++.h>
using namespace std;
int len = 0;
vector<vector<int>> ksum(vector<int> &nums, int target, int k, int start)
{
    vector<vector<int>> res;
    if (start >= len)
    {
        return res;
    }
    if (k == 2)
    {
        int l = start, r = len - 1;
        while (l < r)
        {
            if (target - nums[l] == nums[r])
            {
                res.push_back({nums[l], nums[r]});
                while (l < (len - 1) && nums[l] == nums[l + 1])
                    l++;
                while (r > 0 && nums[r] == nums[r - l])
                    r--;
                l++, r--;
            }
            else if ((target - nums[l]) > nums[r])
                l++;
            else
                r--;
        }
        return res;
    }
    else if (k > 2)
    {
        for (int i = start; i < len; i++)
        {
            vector<vector<int>> temp = ksum(nums, target - nums[i], k - 1, i + 1);
            if (temp.size() != 0)
            {
                for (int j = 0; j < temp.size(); j++)
                {
                    temp[j].emplace_back(nums[i]);
                    res.emplace_back(temp[j]);
                }
            }
            while (i < len - 1 && nums[i] == nums[i + 1])
                i++;
        }
    }
    return res;
}
vector<vector<int>> fourSum(vector<int> &nums, int target)
{
    len = nums.size();
    sort(nums.begin(), nums.end());
    return ksum(nums, target, 4, 0);
}
int main()
{
    vector<int>nums={1,0,-1,0,-2,2};
    int target=0;
    vector<vector<int>> res=fourSum(nums,target);
}