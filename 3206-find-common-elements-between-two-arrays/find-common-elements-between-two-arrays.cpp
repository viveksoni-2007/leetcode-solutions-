class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {

        unordered_map<int,int> m;
        unordered_map<int,int> n;

        for(int i = 0; i < nums1.size(); i++){
            m[nums1[i]]++;
        }

        for(int i = 0; i < nums2.size(); i++){
            n[nums2[i]]++;
        }

        int count1 = 0;
        int count2 = 0;

        // nums1 ke elements jo nums2 mein present hain
        for(int i = 0; i < nums1.size(); i++){
            if(n.find(nums1[i]) != n.end()){
                count1++;
            }
        }

        // nums2 ke elements jo nums1 mein present hain
        for(int i = 0; i < nums2.size(); i++){
            if(m.find(nums2[i]) != m.end()){
                count2++;
            }
        }

        return {count1, count2};
    }
};
