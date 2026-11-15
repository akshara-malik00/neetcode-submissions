class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans; 
        for(auto it= nums.begin(); it!= nums.end(); it++){
            int i = *(it);  
            for(auto itt= it+1; itt!= nums.end(); itt++){
                if(i+ *(itt) == target){
                    ans.push_back(distance(nums.begin(),it)); 
                    ans.push_back(distance(nums.begin(),itt));  
                }
            }
        }
        return ans; 
    }
};