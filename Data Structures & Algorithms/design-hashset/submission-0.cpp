class MyHashSet {
private:
  vector<int>set; 
public:
    MyHashSet() { 
    }
    void add(int key) {
        set.push_back(key); 
    }
    void remove(int key) {
            int j=0; 
            for(int x: set){
                if(x==key){
                    continue; 
                }else{
                    set[j]= x;
                    j++; 
                }
            }
            int size = set.size(); 
            for(int i=0; i<size-j; i++){
                set.pop_back(); 
            }
    }
    bool contains(int key) { 
        for(int x: set){
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