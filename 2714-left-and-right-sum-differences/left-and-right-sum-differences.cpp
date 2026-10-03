class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int rsum=0;

        for(int i=0;i<nums.size();i++){
            rsum+=nums[i];
        }

        int lsum=0;
        vector<int> result;
        for(int i=0;i<nums.size();i++){
            rsum -= nums[i];
            result.push_back(abs(lsum-rsum));
            lsum += nums[i];
        }

        return result;
    }
};