class Solution {
public:
    int reverse(int x) {
        int ans = 0;
        while (x != 0) {
            int digit = x % 10; 
            ans = ans * 10 + digit; 
            x = x / 10;
        }
        return ans;
    }
    int countDistinctIntegers(vector<int>& nums) {
        int n = nums.size();
        for(int i = 0 ; i < n; i++){
            nums.push_back(reverse(nums[i]));
        }
        // sort(nums.begin(), nums.end());
        // int distinctCount = unique(nums.begin(), nums.end()) - nums.begin();
        
        // return distinctCount;
        unordered_set<int>s;
        for(int i = 0 ; i <nums.size();i++){
            s.insert(nums[i]);
        }
        return s.size();

    }
};