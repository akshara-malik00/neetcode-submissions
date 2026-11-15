class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int>::iterator it = nums.begin();  
        int n = nums.size();
        vector<int> ans;  
        for(auto it:nums){
            ans.push_back(it); 
        }
        for(auto it:nums){
            ans.push_back(it); 
        }
        return ans; 
    }
};