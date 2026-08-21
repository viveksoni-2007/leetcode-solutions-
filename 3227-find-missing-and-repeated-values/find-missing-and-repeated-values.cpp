class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        unordered_set<int> s;
        long long sum = 0;
        int repeated = -1;
        int count = 0;

        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[i].size(); j++) {
                int x = grid[i][j];

                sum += x;
                count++;

                if (s.find(x) != s.end()) {
                    repeated = x;
                }

                s.insert(x);
            }
        }

        long long expectedSum = 1LL * count * (count + 1) / 2;

        int missing = expectedSum - sum + repeated;

        return {repeated, missing};
    }
};