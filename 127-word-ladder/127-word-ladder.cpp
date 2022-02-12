class Solution {
public:
   
 void wordmath(string word,map<string,bool>&m,queue<string>&q){
        string org=word;
        for(int j=0;j<word.size();j++){
        for(int i=0;i<26;i++){
            word[j]='a'+i;
            if(m.find(word)!=m.end() and m[word]==false){
                q.push(word);
                m[word]=true;
            }
        }
            word=org;
        }
    }
    
    int ladderLength(string start, string end, vector<string>& wordList) {
        map<string,bool>m;
        for(int i=0;i<wordList.size();i++){
            m[wordList[i]]=false;
        }
        if(m.find(end)==m.end())return 0;
        queue<string>q;
        q.push(start);
        m[start]=true;
        int len=1;
        while(!q.empty()){
            int size=q.size();
          
           
           for(int i=0;i<size;i++){
                 string word=q.front();
                  q.pop();
                 if(word==end)return len;
                wordmath(word,m,q);
        }
            
            len++;
        }
        return 0;
    }
};