class Solution {
public:
    bool isPerfect(int n ){
        int root = sqrt(n);
        if(root*root==n) return true ;
        else return false ;
    }
    bool judgeSquareSum(int c) {
        int x = 0 ; 
        int y = c ;
        while(x<=y){
            if(isPerfect(x) && isPerfect(y)){
                return true ;
            }
            else if(!isPerfect(y)){ // y is not a perfect square 
                y = (int)sqrt(y)*(int)sqrt(y);
                x = c - y ;
            }
            else { // x is not a perfect square 
                x = ((int)sqrt(x)+1) *((int)sqrt(x)+1);
                y = c - x ;
            }
        }
        return false ;
    
    }
};