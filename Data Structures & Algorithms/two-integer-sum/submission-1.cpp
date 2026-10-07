#include<unordered_map>
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>hash;
        for (int i = 0; i < nums.size(); i++){
            int j = target - nums[i];
            if (hash.contains(j)){
                return {hash[j],i};
            }
            hash[nums[i]] = i;
        }
        return {};
    }
};
