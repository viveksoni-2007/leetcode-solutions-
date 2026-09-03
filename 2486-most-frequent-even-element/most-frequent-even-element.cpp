class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {

        map<int, int> mp;

        for(int x : nums) {
            if(x % 2 == 0) {
                mp[x]++;
            }
        }

        int ans = -1;
        int maxFreq = 0;

        for(auto x : mp) {
            if(x.second > maxFreq) {
                maxFreq = x.second;
                ans = x.first;
            }
        }

        return ans;
    }
};