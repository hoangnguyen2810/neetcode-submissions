class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>map;
        for (int i = 0; i < nums.size(); i++){
            map[nums[i]]++;
        }
        vector<pair<int,int>> freq(map.begin(), map.end());
        sort(freq.begin(),freq.end(), [](auto &a, auto&b){
            return a.second > b. second;
        });
        vector<int> result;
        for (int i = 0; i < k; i++){
            result.push_back(freq[i].first);
        }
        return result;
    }
};
