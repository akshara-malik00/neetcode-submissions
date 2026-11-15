class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count; 
        unordered_map<int,int> mpp; 
        for(auto it= nums.begin(); it!= nums.end(); it++){
            mpp[*it]++; 
        }
        for(auto itt:mpp){
            if(itt.second>(nums.size()/2)){
            count = itt.first; 
        }
        }
        return count; 
        
    }
};