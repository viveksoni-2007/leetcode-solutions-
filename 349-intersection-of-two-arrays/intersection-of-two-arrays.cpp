class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        // vector<int>ans ;
        // unordered_set<int> s1(nums1.begin(), nums1.end());
        // unordered_set<int> s2(nums2.begin(), nums2.end());
        // unordered_map<int, int> m;
        //  for(int x : s1)
        //     m[x]++;

        // for(int x : s2)
        //     m[x]++;

        // for(auto x : m) {
        //     if(x.second == 2)
        //         ans.push_back(x.first);
        // }

        // return ans;
         unordered_set<int> s1, s2;
        vector<int> ans;

        for(int x : nums1)
            s1.insert(x);

        for(int x : nums2)
            s2.insert(x);

        for(int x : s1) {
            if(s2.count(x))
                ans.push_back(x);
        }

        return ans;
    }
};