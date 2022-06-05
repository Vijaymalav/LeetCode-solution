

class LRUCache {
    
    class Node{

    public:
        int val;
    int key;
    Node* next;
    Node* prev;
    Node(int _key,int _val){
        val=_val;
        key=_key;
        // next=NULL;
        // prev=NULL;
    }
};
    
    
    
    
    int cap;
    unordered_map<int ,Node*>m;
 Node*  head=new Node(-1,-1);
 Node*  tail=new Node(-1,-1);
public:
      LRUCache(int capacity) {
        cap=capacity;
     
        head->next=tail;
        tail->prev=head;
    }
    
    void delet(Node* nd){
         Node* pre=nd->prev;
        Node* nxt=nd->next;
        pre->next=nxt;
        nxt->prev=pre;
      
       
        
    }
    void addnode( Node* newnode){
      
         newnode->next=head->next;
         head->next->prev=newnode;
         newnode->prev=head;
         head->next=newnode;
     
        
    }
    
  
    
    int get(int key) {
        int ans=-1;
        if(m.find(key)==m.end())return -1;
     
         Node* tmp=m[key];
         ans=tmp->val;
               m.erase(key);
        delet(tmp);
        addnode(tmp);
        m[key]=head->next;
        
        return ans;
  
    }
    
    void put(int key, int value) {
     if(m.find(key)!=m.end()){
         
         delet(m[key]);
         m.erase(key);
       
        
     }
        else if(m.size()==cap){
            int keyy=tail->prev->key;
            m.erase(keyy);
            delet(tail->prev);
          
        }
        
            addnode(new Node(key,value));
            m[key]=head->next;
        
      
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */