class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        multiset<int> ms;
        vector<int> ans;  
        for(int i=0; i<nums.size(); i++){ 
            ms.insert(nums[i]); 
        }
        for(int c: ms){
            ans.push_back(c); 
        } 
        return ans; 
    }
};