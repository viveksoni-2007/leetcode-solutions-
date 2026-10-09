class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<char,int>m;
        unordered_map<char,int>n;
        int ans = 0 ;
        for(int i = 0 ; i < s.size();i++){
            m[s[i]]++;
        }
        for(int i = 0 ; i < t.size();i++){
            n[t[i]]++;
        }

        for(auto x : m ){
            if(x.second > n[x.first]){
                ans += x.second  - n[x.first];
            }
        }

        return  ans ;

    }
};