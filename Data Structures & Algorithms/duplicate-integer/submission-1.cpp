class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::set<int> neww; 
        for(vector<int>::iterator it = nums.begin(); it != nums.end(); it++){
            int n = *(it); 
            neww.insert(n);         
}
if(nums.size()== neww.size()){
    return false; 
}else{
    return true; 
}
}
}; 