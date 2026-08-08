class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false ;
        // sort(s.begin(),s.end());
        // sort(t.begin(),t.end());
        // if(s==t) return true;
        // else return false ;

        // unordered_map<char,int> map1;
        // unordered_map<char,int> map2;
        // for(int i = 0 ; i < s.size();i++){
        //     map1[s[i]]++;
        // }
        // for(int i = 0 ; i < t.size();i++){
        //     map2[t[i]]++;
        // }
        // for(auto x : map1){
        //     char ch1 = x.first;
        //     int frq1 = x.second ;
        //     if(map2.find(ch1)!=map2.end()){
        //         int frq2 = map2[ch1];
        //         if(frq1!=frq2) return false ;
        //     }
        //     else return false ;
        // }
        // return true ;



         unordered_map<char,int> map1;
        for(int i = 0 ; i < s.size();i++){
            map1[s[i]]++;
        }
        for(int i = 0 ; i < t.length() ; i++){
            char ch  =t[i];
            if(map1.find(ch)!=map1.end()){
                map1[ch]--;
                if(map1[ch]==0) map1.erase(ch);
            }
            else return false ;
        }
        if(map1.size()>0) return false ;
        return true ;
    }
}; 