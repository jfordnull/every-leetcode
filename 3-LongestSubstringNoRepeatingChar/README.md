# 3. Longest Substring Without Repeating Characters

**Difficulty: Medium**

Given a string *s*, find the **longest substring** without repeating characters.

---

Example 1:  

    Input: s = "abcabcbb"
    Output: 3
    Explanation: The answer is "abc", with the length of 3.

Example 2:  

    Input: s = "bbbbb"
    Output: 1
    Explanation: The answer is "b", with the length of 1.

Example 3:

    Input: s = "pwwkew"
    Output: 3
    Explanation: The answer is "wke", with the length of 3.
    Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.

# My Solution:

Runtime: 4 ms

**Beats: 90.97% of solutions**

Memory: 12.92 mb

**Beats: 40.18% of solutions**

```C++
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char,int> sub;
        int start = 0;
        int k = 0;
        for(int i = 0; i < s.length(); i++){
            if(sub.find(s[i]) != sub.end() && sub[s[i]] >= start){
                start = sub[s[i]] + 1;
            }
            sub[s[i]] = i;
            k = max(k, i - start + 1);
        }
        return k;
    }
};
```