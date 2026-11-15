class Solution {
public:
    bool isAnagram(string s, string t) {
        std:: unordered_map<char,int> mpp1;  
        std:: unordered_map<char,int> mpp2; 
        for(int i=0; i<s.size(); i++){
            mpp1[s[i]]++; 
        } 
        for(int j=0; j<t.size(); j++){
            mpp2[t[j]]++; 
        } 
        if(mpp1 == mpp2){
            return true; 
        }else{
            return false; 
        }
    }
};
