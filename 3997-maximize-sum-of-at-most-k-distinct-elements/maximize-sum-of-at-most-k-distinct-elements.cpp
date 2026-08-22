class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {
        vector<int> ans;

        sort(nums.begin(), nums.end(), greater<int>());

        nums.erase(unique(nums.begin(), nums.end()), nums.end());

        for(int i = 0; i < k && i < nums.size(); i++) {
            ans.push_back(nums[i]);
        }

        return ans;
    }
};