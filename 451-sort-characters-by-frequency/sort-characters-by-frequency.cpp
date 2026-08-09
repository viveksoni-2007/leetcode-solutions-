class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>m;
        for(char c : s){
            m[c]++;
        }
        string ans = "";

        while(m.size() > 0) {
            char ch;
            int maxFreq = 0;

            for(auto x : m) {
                if(x.second > maxFreq) {
                    maxFreq = x.second;
                    ch = x.first;
                }
            }

            for(int i = 0; i < maxFreq; i++) {
                ans += ch;
            }

            m.erase(ch);
        }

        return ans;
    }
};