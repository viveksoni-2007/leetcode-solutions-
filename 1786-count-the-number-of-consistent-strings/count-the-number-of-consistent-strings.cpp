class Solution {
public:
    bool helper(string word , string allowed){
        unordered_set<char> s(allowed.begin(),allowed.end());
        for(auto x : word){
            if(s.find(x)==s.end()){
                return false ;
            } 
        } 
        return true ;
    }
    int countConsistentStrings(string allowed, vector<string>& words) {
        int count = 0 ; 
        for(int i = 0 ; i < words.size() ; i++){
            if(helper(words[i],allowed)) count++;
        }
        return count ;
    }
};