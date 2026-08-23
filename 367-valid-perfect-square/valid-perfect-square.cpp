class Solution {
public:
    bool isPerfectSquare(int num) {
        int low = 0 ; 
        int hi = num ;
        bool flag = false ;
        while(low<=hi){
            int mid = low + (hi-low)/2 ;
            long long m = (long long)mid ;
            long long y = (long long)num ;
            if(m*m==y) {
                flag = true ;
                return mid ;
            }
            else if (m*m>y) hi = mid -1 ;
            else low = mid +1 ;
        }
        return flag  ;
    }
};