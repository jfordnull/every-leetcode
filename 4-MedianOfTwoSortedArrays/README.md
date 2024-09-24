# 4. Median of Two Sorted Arrays

**Difficulty: Hard**

Given two sorted arrays *nums1* and *nums2* of size *m* and *n* respectively, return the median of the two sorted arrays.

The overall run time complexity should be **O(log (m+n))**.

---

Example 1:  

    Input: nums1 = [1,3], nums2 = [2]
    Output: 2.00000
    Explanation: merged array = [1,2,3] and median is 2.

Example 2:  

    Input: nums1 = [1,2], nums2 = [3,4]
    Output: 2.50000
    Explanation: merged array = [1,2,3,4] and median is (2 + 3) / 2 = 2.5.

# My Solution:

Runtime: 20 ms

**Beats: 78.97% of solutions**

Memory: 95.57 mb

**Beats: 34.51% of solutions**

**Did not meet my constraints (beats >= 90% in either category), but I'd like to move on for now. There must be solutions that don't require merging the arrays**

```C++
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> merged;
        mergeArrays(nums1, nums2, merged);
        if(merged.size()%2 != 0) return merged[merged.size()/2];
        else return float(merged[merged.size()/2-1] + merged[merged.size()/2])/2;
    }

    void mergeArrays(vector<int>& a1, vector<int>& a2, vector<int>& a3){
        int i = 0; int j = 0;
        while(i < a1.size() && j < a2.size()){
            if(a1[i] < a2[j]) a3.push_back(a1[i++]);
            else a3.push_back(a2[j++]);
        }
        while(i < a1.size()) a3.push_back(a1[i++]);
        while(j < a2.size()) a3.push_back(a2[j++]);
    }
};
```