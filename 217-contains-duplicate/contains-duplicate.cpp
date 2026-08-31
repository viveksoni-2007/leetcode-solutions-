class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        // sort(nums.begin(), nums.end());

        // for(int i = 1; i < nums.size(); i++) {
        //     if(nums[i] == nums[i - 1]) {
        //         return true;
        //     }
        // }

        // return false;

        unordered_map<int,int>m;
        for(int i = 0 ; i < nums.size();i++){
            m[nums[i]]++;
        }
        for(auto x : m){
            if(x.second >1){
                return true ;
            }
        }
        return false ;
    }
};