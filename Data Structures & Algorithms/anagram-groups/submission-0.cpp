#include <unordered_map>
#include <algorithm>
#include <vector>
#include <string>
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>>map;
        for (string str : strs){
            string key = str;
            sort(key.begin(), key.end());
            map[key].push_back(str);
        }
        vector<vector<string>> result;
        for (pair <string, vector<string>> p : map){
            string key = p.first;
            vector<string> value = p.second;
            result.push_back(value);  
        }
        return result;
    }
};
