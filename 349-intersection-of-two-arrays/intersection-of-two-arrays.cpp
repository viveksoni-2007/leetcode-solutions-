class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans ;
        unordered_set<int> s1(nums1.begin(), nums1.end());
        unordered_set<int> s2(nums2.begin(), nums2.end());
        unordered_map<int, int> m;
         for(int x : s1)
            m[x]++;

        for(int x : s2)
            m[x]++;

        for(auto x : m) {
            if(x.second == 2)
                ans.push_back(x.first);
        }

        return ans;
    }
};