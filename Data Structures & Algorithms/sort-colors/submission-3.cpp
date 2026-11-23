class Solution {
public:
    void sortColors(vector<int>& nums) {
        //0,1 and 2 ke number of occurences ko count karke 
        //unhi ko array me daalskte hai 
        int zero = 0; 
        int one = 0; 
        int two = 0;  
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==0){ 
                zero++; 
            }
            else if(nums[i]==1){
                one++; 
            }
            else{
                two++; 
            }
        } 
       nums.clear(); 
       for(int i=0; i<zero; i++){
        nums.push_back(0); 
       }
       for(int j=0; j<one; j++){
        nums.push_back(1); 
       }
       for(int k=0; k<two; k++){
        nums.push_back(2); 
       }

    }
};                 