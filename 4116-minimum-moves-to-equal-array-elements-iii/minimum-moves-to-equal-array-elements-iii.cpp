class Solution {
public:
    int minMoves(vector<int>& nums) {
        int maxo = INT_MIN ;
        for(int i = 0 ; i< nums.size() ; i++){
            maxo = max(maxo , nums[i]);
        }

        int steps = 0 ;
        for(int i = 0 ; i< nums.size() ; i++ ){
            steps += abs(maxo - nums[i]);
        }
        return steps ;
    }
};