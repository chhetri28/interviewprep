int lengthOfLongestSubstring(string s)
{
    int i = 0, j = 0;
    int mx = 0;
    unordered_map<char, int> mp;
    while (j < s.length())
    {
        mp[s[j]]++;
        if (mp[s[j]] == 1)
        {
            mx = max(mx, j - i + 1);
        }
        else if (mp[s[j]] > 1)
        {
            while (mp[s[j]] > 1)
            {
                mp[s[i]]--;
                i++;
                if (mp[s[j]] == 1)
                {
                    mx = max(mx, j - i + 1);
                }
            }
        }
        j++;
    }
    return mx;
}