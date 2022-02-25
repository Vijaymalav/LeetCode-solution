class Solution {
public:
    int compareVersion(string vr1, string vr2) {
        vector<int>v1,v2;
       string str="";
        for(auto ch:vr1){
            if(ch=='.'){
                  if(str==""){
                    v2.push_back(0);
                }
            else{    v1.push_back(stoi(str));
                str="";
                continue;
                }
            }
            
            // else if(ch=='0' and str=="")continue;
            else{
                str.push_back(ch);
            }
        }
          if(str==""){
                    v1.push_back(0);
                }
      else  v1.push_back(stoi(str));
        str="";
             for(auto ch:vr2){
            if(ch=='.'){
                if(str==""){
                    v2.push_back(0);
                }
                else{
                v2.push_back(stoi(str));
                str="";
                continue;
            }
            }
            
        //    else if(ch=='0' and str=="")continue;
            else{
                str.push_back(ch);
            }
            
        }
          if(str==""){
                    v2.push_back(0);
                }
        else  v2.push_back(stoi(str)); 
        int n=v1.size();
        int m=v2.size();
        int i=0,j=0;
        while(i<n || j<m){
            int val1=i<n?v1[i++]:0;
            int val2=j<m?v2[j++]:0;
            if(val1<val2)return -1;
            if(val1>val2)return 1;
        }
        return 0;
        
        
        }
};