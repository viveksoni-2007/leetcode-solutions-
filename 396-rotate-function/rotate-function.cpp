// class Solution {
// public:
//     vector<int> rotate(vector<int>& nums, int k) {
//         k = k % nums.size();

//         reverse(nums.begin(), nums.end());
//         reverse(nums.begin(), nums.begin() + k);
//         reverse(nums.begin() + k, nums.end());

//         return nums;
//     }

//     int maxRotateFunction(vector<int>& nums) {
//         vector<int> ans;

//         for(int i = 0; i < nums.size(); i++) {

//             if(i > 0) {
//                 rotate(nums, 1);
//             }

//             int sum = 0;

//             for(int j = 0; j < nums.size(); j++) {
//                 sum += nums[j] * j;
//             }

//             ans.push_back(sum);
//         }

//         return *max_element(ans.begin(), ans.end());
//     }
// };

class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        int n = nums.size();

        long long sum = 0;
        long long F = 0;

        for(int i = 0; i < n; i++) {
            sum += nums[i];
            F += 1LL * i * nums[i];
        }

        long long ans = F;

        for(int i = n - 1; i > 0; i--) {
            F = F + sum - 1LL * n * nums[i];
            ans = max(ans, F);
        }

        return ans;
    }
};