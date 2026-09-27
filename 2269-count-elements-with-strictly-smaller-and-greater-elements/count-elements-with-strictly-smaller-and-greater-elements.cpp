class Solution {
public:
    int countElements(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int ct = 0;

        for(int i = 0; i < nums.size(); i++) {
            
            if(nums[i] != nums[0] && nums[i] != nums[nums.size()-1]) {
                ct++;
            }
        }

        return ct;
    }
};