class Solution {
public:
    vector<int> twoSum(vector<int> nums, int target){
        map<int, int> delta;
        for (int i=0;i<nums.size();i++){
            if(delta.find(nums[i])!=delta.end()) return {delta.at(nums[i]),i};
            delta[target-nums[i]]=i;
        }
        return {0,0};
    }
};