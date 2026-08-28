class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>m;
        unordered_map<int,int>n;
        for(int i = 0 ; i< nums1.size();i++){
            m[nums1[i]]++;
        }
        for(int i = 0 ; i< nums2.size();i++){
            n[nums2[i]]++;
        }
        vector<int>ans ;
        for(auto x : m) {

            if(n.find(x.first) != n.end()) {

                int count = min(x.second, n[x.first]);

                for(int i = 0; i < count; i++) {
                    ans.push_back(x.first);
                }
            }
        }

        return ans;
    }
};