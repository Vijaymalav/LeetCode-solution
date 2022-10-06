class TimeMap {
public:
    
    unordered_map <string,map<int,string>> umap;
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        
        umap[key][-timestamp] = value;
    }
    
    string get(string key, int t) {
        
        if(umap[key].find(-t)!=umap[key].end()){
            return umap[key][-t];
        }
        
        auto iter = umap[key].lower_bound(-t);
        if(-t>iter->first){
            return "";
        }
        return iter->second;
    }
};