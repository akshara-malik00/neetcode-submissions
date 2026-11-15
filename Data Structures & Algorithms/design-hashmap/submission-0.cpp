class MyHashMap {
private: 
vector<pair<int,int>>Hashmap;  
public:    
    MyHashMap() {
         
    }
    
    void put(int key, int value) {
        for(int i=0; i<Hashmap.size(); i++){
            if(Hashmap[i].first==key){
                Hashmap[i].second=value; 
                return;  
            }
        }
        Hashmap.push_back({key,value}); 
    }
    

    int get(int key) {
        for(int i=0; i<Hashmap.size(); i++){
            if(Hashmap[i].first==key){
                return Hashmap[i].second; 
            }
        }
        return -1; 
    }
    void remove(int key) {
        for(int i=0; i<Hashmap.size(); i++){
            if(Hashmap[i].first==key){   
                Hashmap.erase(Hashmap.begin()+i); 
            }       
        }
        return; 
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */