class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>hash;
        for (int i = 0; i < nums.size(); i++){
            hash[nums[i]]++;
        }
        vector<pair<int,int>> freq(hash.begin(), hash.end());
        sort(freq.begin(), freq.end(), [](auto &a, auto&b){
            return a.second > b.second;
        });
        vector<int> result;
        for (int i = 0; i < k; i++){
            result.push_back(freq[i].first);
        }
        return result;
    }
};
