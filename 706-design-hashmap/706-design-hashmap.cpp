class MyHashMap {
public:
      vector<pair<int,int>>vec;
    MyHashMap() {
      
    }
    
    void put(int key, int value) {
       bool f=true;
         for(int i=0;i<vec.size();i++){
            if(key==vec[i].first){
                f=false;
              vec[i].second=value;
                break;
            }
        }
      
       if(f) vec.push_back({key,value});
    }
    
    int get(int key) {
        int ans=-1;
        for(int i=0;i<vec.size();i++){
            if(key==vec[i].first){
                ans=vec[i].second;
                break;
            }
        }
        return ans;
    }
    
    void remove(int key) {
        bool f=false;
         for(int i=0;i<vec.size();i++){
            if(key==vec[i].first){
                f=true;
               swap(vec[i],vec[vec.size()-1]);
            }
        }
       if(f) vec.pop_back();
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */