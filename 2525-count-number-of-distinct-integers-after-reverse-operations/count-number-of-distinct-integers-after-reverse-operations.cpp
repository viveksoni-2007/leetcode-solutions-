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
        unordered_set<int>s;
        int n = nums.size();
        for(int i = 0 ; i < n; i++){
            s.insert(reverse(nums[i]));
             s.insert(nums[i]);
        }
        // sort(nums.begin(), nums.end());
        // int distinctCount = unique(nums.begin(), nums.end()) - nums.begin();
        
        // return distinctCount;

        return s.size();

    }
};