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