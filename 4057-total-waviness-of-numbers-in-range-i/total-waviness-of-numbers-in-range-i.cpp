class Solution {
public:
    int getWaviness(int x) {
        vector<int> d;

        while(x > 0) {
            d.push_back(x % 10);
            x /= 10;
        }

        reverse(d.begin(), d.end());

        int count = 0;

        for(int i = 1; i < d.size() - 1; i++) {

            if((d[i] > d[i-1] && d[i] > d[i+1]) ||
               (d[i] < d[i-1] && d[i] < d[i+1])) {
                count++;
            }
        }

        return count;
    }

    int totalWaviness(int num1, int num2) {

        int ans = 0;

        for(int i = num1; i <= num2; i++) {
            ans += getWaviness(i);
        }

        return ans;
    }
};