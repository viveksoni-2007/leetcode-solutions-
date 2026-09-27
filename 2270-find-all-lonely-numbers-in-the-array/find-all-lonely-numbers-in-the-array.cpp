class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        vector<int> ans;
        unordered_map<int, int> mp;

        // frequency count
        for(int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
        }

        // check lonely
        for(int i = 0; i < nums.size(); i++) {

            if(mp[nums[i]] == 1 &&
               mp.find(nums[i] + 1) == mp.end() &&
               mp.find(nums[i] - 1) == mp.end()) {

                ans.push_back(nums[i]);
            }
        }

        return ans;
    }
};