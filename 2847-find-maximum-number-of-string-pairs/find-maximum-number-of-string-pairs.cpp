// class Solution {
// public:
//     int maximumNumberOfStringPairs(vector<string>& words) {
//         int n = words.size();
//         unordered_set<string> s ;
//         for(int i = 0 ; i < words.size(); i++){
//             s.insert(words[i]);
//         }
//         int c = 0 ;
//         for(int i = 0 ; i < words.size();i++){
//             string rev  = words[i];
//             reverse(rev.begin(),rev.end());
//             if(words[i]==rev) continue ;
//             if(s.find(rev)!=s.end()){
//                 c++;
//                 s.erase(words[i]);
//             }
//         }
//         return c;
//     }
// };
class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        int n = words.size();
        int c = 0 ;
        unordered_set<string> s ;
        for(int i = 0 ; i < words.size(); i++){
            string rev  = words[i];
            reverse(rev.begin(),rev.end());
            if(s.find(rev)!=s.end()) c++;
            else s.insert(words[i]);
        }
        return c;
    }
};