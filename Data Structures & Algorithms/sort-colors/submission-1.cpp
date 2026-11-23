class Solution {
public:
    void sortColors(vector<int>& nums) {
        //bubble sort 
        int n = nums.size(); 
        for(int i=n; i>0; i--){
            int didSwap =0; 
            for(int j=0; j<i-1; j++){
                if(nums[j]>nums[j+1]){
                    swap(nums[j],nums[j+1]); 
                    didSwap = 1; 
                }
            }
            if(didSwap == 0){
                break; 
            }
        }
    }
};