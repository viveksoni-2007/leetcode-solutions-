class Solution {
public:
    int maxDistinct(string s) {
        int count = 0 ;
        unordered_set<char>m;
        for(int i = 0 ; i<s.size();i++){
            m.insert(s[i]);
        }
        return m.size();
    }
};