class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        int ans = 0 ;
        int count = 0 ; 

        for(int i = 0 ; i < costs.size() ; i++){
            ans += costs[i];

            if(ans > coins) {
                break;
            }

            count++;
        }
        return count ;
    }

};