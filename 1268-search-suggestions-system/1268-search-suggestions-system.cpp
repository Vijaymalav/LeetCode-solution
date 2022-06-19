class Solution {
public:
    void fillvec(vector<string>product,vector<string>&vec,string pre){
        for(auto s:product){
            if(s.find(pre)==0){
                vec.push_back(s);
            }
            if(vec.size()>=3)return ;
            
        }
    }
    vector<vector<string>> suggestedProducts(vector<string>& products, string word) {
        sort(products.begin(),products.end());
        int n=word.size();
        vector<vector<string>>ans;
        for(int i=1;i<=n;i++){
            string prefix=word.substr(0,i);
            vector<string>vec;
            fillvec(products,vec,prefix);
            // if(vec.size()==0)break;
            ans.push_back(vec);
        }
        return ans;
    }
};