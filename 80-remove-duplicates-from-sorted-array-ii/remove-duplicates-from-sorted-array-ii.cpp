class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        map<int, int> m;

        for(int x : nums) {
            m[x]++;
        }

        vector<int> ans;

        for(auto x : m) {

            int count = min(x.second, 2);

            for(int i = 0; i < count; i++) {
                ans.push_back(x.first);
            }
        }

        nums = ans;

        return nums.size();
    }
};