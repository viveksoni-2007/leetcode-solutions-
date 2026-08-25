class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_map<int , int>m ;
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i]%k==0){
                m[nums[i]]++;
            }
        }
        
        int i = k;

        while(m.find(i) != m.end()) {
            i += k;
        }

        return i; 

    }
};