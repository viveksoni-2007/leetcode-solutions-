class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char,int>v;
        unordered_map<char,int>m;

        int maxv=0;
        int maxc=0;
        for(char c : s){
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                v[c]++;
                maxv = max(maxv , v[c]);
            }
            else {
                m[c]++;
                maxc  = max(maxc , m[c]);
            }
        }
        return maxc+maxv ;


    }
};