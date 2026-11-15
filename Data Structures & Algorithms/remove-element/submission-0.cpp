class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count =0; 
        
        for(auto it=nums.begin(); it != nums.end(); it++){
            
            if((*it)!= val){
                count++; 
            }
        }
        remove(nums.begin(), nums.end(), val);
        return count; 
    }
};