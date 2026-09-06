class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int maxi = *max_element(nums.begin(), nums.end());
        int idx ;
        for(int i = 0 ; i < nums.size(); i++){
            if(nums[i]==maxi) idx = i ;
        }
        sort(nums.begin(),nums.end());
        for(int i = 0 ; i < nums.size();i++){
            if(nums[i]!=maxi && maxi<2*nums[i] ){
                return -1 ;
            }
        }
        return idx ;
    }
};