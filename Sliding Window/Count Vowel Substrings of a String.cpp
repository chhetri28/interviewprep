/*
 * @lc app=leetcode id=2062 lang=cpp
 *
 * [2062] Count Vowel Substrings of a String
 */

// @lc code=start
// #include<bits/stdc++.h>
// using namespace std;
class Solution
{
public:
    bool isVowel(char c)
    {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    };
    int countVowelSubstringshelper(string &w, int k)
    {
        int i = 0, j = 0;
        unordered_map<char, int> mp;
        int c = 0;
        for (int j=0;j < w.length();j++)
        {
            if (!isVowel(w[j]))
            {
                i = j + 1;
                mp.clear();
                continue;
            }
            mp[w[j]]++;
            while (mp.size() > k)
            {
                mp[w[i]]--;
                if (mp[w[i]] == 0)
                {
                    mp.erase(w[i]);
                }
                i++;
            }
            c += j - i + 1;
        }
        return c;
    }
    int countVowelSubstrings(string w)
    {
        return countVowelSubstringshelper(w, 5) - countVowelSubstringshelper(w, 4);
    }
};
// @lc code=end
