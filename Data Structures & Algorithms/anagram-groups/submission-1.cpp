class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;  
        unordered_map<string, vector<string>> mpp; 
        for(int i=0; i<strs.size(); i++){
            vector<int> frequency (26,0); 
            for(int j=0; j<strs[i].size(); j++){
                frequency[strs[i][j] - 'a']++; 
            } 

            string pattern= ""; 
            for(int k=0; k<26; k++){  
            pattern += to_string(frequency[k])+ " ";  
            } 
          mpp[pattern].push_back(strs[i]);   
        }
        for(auto& entry: mpp){
            ans.push_back(entry.second); 
        }
        return ans; 
    }
};
