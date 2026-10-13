class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n = nums.size();

        for (int i = 0; i < n; i++)
            nums[i] = 1LL * nums[i] * nums[i];

        sort(nums.begin(), nums.end());

        long long ans = 0;
        int k = n / 2;   // number of minus places

        // Step 3: subtract the k smallest squares
        for (int i = 0; i < k; i++)
            ans -= nums[i];

        for (int i = k; i < n; i++)
            ans += nums[i];

        return ans;
    }
};