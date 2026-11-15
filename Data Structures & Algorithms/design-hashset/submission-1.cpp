class MyHashSet {
private:
  vector<vector<int>>set; 
  int hashe(int value){ 
    return value%10;
  }; 
public:
    MyHashSet() { 
        set.resize(10); 
    }
    void add(int key) {
        if(contains(key)){
             return;
        }else{
            set[hashe(key)].push_back(key); 
        }
        
    }
    void remove(int key) {
        int b = hashe(key); 
        int j=0; 
            for(int x: set[b]){
                if(x==key){
                    continue; 
                }else{
                    set[b][j]= x;
                    j++; 
                }
            }
            int size = set[b].size(); 
            for(int i=0; i<size-j; i++){
                set[b].pop_back(); 
            }
    }
    bool contains(int key) { 
        int b = hashe(key); 
        for(int x: set[b]){
            if(x==key){
                return true; 
            }
        }
        return false; 
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */