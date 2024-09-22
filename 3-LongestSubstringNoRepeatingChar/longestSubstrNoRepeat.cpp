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