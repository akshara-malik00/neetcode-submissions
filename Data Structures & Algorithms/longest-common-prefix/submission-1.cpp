class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans; 
        for(int j=0; j<strs[0].size(); j++){
            char check = strs[0][j];
            for(int i=1; i<strs.size(); i++){ 
                 
                if(j>=strs[i].length()){
                    return ans; 
                }
                    
                
                        if(strs[i][j]!=check){
                            return ans;  
                            
                        }
                    
                        
                             
            }
            ans.push_back(check);
        }
        return ans; 
        //strs[i][j] so pehle i ko change karte rehna hai j ko constant rakh kar 
    }
};