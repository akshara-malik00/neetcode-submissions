class Solution {
public:
static bool comp(pair<int,int>p1, pair<int,int>p2){
            if(p1.second>p2.second) return true; 
            if(p1.second<p2.second) return false; 
            return false; 
        }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mpp;  
        for(int i=0; i<nums.size(); i++){
            mpp[nums[i]]++; 
        }  
        //[{0,0},{1,1},{2,2},{3,3}] 
        vector<pair<int,int>> v(mpp.begin(),mpp.end());  

        
        sort(v.begin(),v.end(),comp);  

        vector<int> ans; 
        for(int j=0; j<k; j++){
            ans.push_back(v[j].first);  
        }
           return ans; 
    }
};
