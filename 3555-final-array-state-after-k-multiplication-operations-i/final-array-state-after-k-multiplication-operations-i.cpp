class Solution {
public:
    int mini(vector<int>nums){
        int idx=0 ;
        int miin = nums[0] ;
        for(int i = 0 ; i < nums.size(); i++){
            if(nums[i]<miin){
                miin = nums[i];
                idx = i;
            }
        }
        return idx ;
    }

    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        for(int i = 0 ; i < k  ; i++){
            int ix = mini(nums);

            nums[ix] = nums[ix]*multiplier;
        }
        return nums ;
    }
};