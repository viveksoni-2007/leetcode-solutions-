class Solution {
public:
    int findValueOfPartition(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int partition = 1e9 ; 
        for(int i = 0 ; i < nums.size()-1 ; i++){
            partition  = min(partition,(nums[i+1] - nums[i]));
        }
        return partition  ;
    }
};