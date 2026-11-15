class MyHashMap {
private:
vector<vector<pair<int,int>>>Hashmap; 
int hashe(int val){
    return val%10; 
}   
public:
    MyHashMap() {
        Hashmap.resize(10); 
    }
    void put(int key, int value) {  
        int b = hashe(key);  
        for(int i=0; i<Hashmap[b].size(); i++){
            if(Hashmap[b][i].first == key){
                Hashmap[b][i].second=value; 
                return; 
            }
        }
        Hashmap[b].push_back({key,value});  
    }
    
    int get(int key) { 
        int b = hashe(key);  
        for(int i=0; i<Hashmap[b].size(); i++){
            if(Hashmap[b][i].first == key){
                return Hashmap[b][i].second; 
            }
        }
        return -1; 
        
    }
    
    void remove(int key) { 
        int b = hashe(key);  
        for(int i=0; i<Hashmap[b].size(); i++){
            if(Hashmap[b][i].first == key){
                Hashmap[b].erase(Hashmap[b].begin()+i); 
            }
        }
        
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */