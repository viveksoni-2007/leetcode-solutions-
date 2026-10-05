class Solution {
public:
    int findMaxK(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i = 0 ; i < nums.size() ; i++){
            mp[nums[i]]++;
        }
        int ans = -1 ;
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i]>0){
                if(mp.find(nums[i]*-1)!=mp.end()){
                    if(nums[i]>ans){
                        ans = nums[i];
                    }
                }
            }
        }
        return ans ; 
    }
};