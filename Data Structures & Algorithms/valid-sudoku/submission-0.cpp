class Solution {
public:                                          
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<char,int> mpp1; 
        unordered_map<char,int> mpp2;
        unordered_map<char,int> mpp3;
        //checking for all the rows:- 
        for(int i=0; i<9; i++){
            for(int j=0; j<9; j++){
                mpp1[board[i][j]]++;    
            }
            for(auto n: mpp1){
                if(n.second>1 &&n.first!='.'){
                    return false; 
                }
            }
            mpp1.clear();
        }                   
        //checking for all the columns:- 
        for(int j=0; j<9; j++){
            for(int i=0; i<9; i++){
              mpp2[board[i][j]]++; 
            }
            for(auto n: mpp2){
                if(n.second>1 &&n.first!='.'){
                    return false; 
                }
            }
            mpp2.clear(); 
        }
        //checking for individual 3*3 blocks:- 
    //first the outer loops which land us into all these boxes:- 
    for(int x=0; x<7; x+=3){
        for(int y=0; y<7; y+=3){
            for(int i=x; i<x+3; i++){
                for(int j=y; j<y+3; j++){
                    mpp3[board[i][j]]++;
                }
            }
            for(auto n: mpp3){
                if(n.second>1 &&n.first!='.'){
                    return false; 
                }
            }
            mpp3.clear(); 
        }
    }
    return true; 
        }
}; 

