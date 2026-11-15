class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans; 
        vector<string>duplicate(strs);  
    for(int i=0; i<duplicate.size(); i++){
        sort(duplicate[i].begin(), duplicate[i].end()); 
    } 
    unordered_map<string, vector<int>>mpp;  
    for(int j=0; j<duplicate.size(); j++){
        mpp[duplicate[j]].push_back(j); 
    }    
    for(auto it: mpp){
        vector<string> arr; 
        for(int k=0; k<it.second.size(); k++){
            arr.push_back(strs[it.second[k]]); 
        }
        ans.push_back(arr); 
    } 
    return ans; 
};
};
