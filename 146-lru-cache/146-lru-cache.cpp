

class LRUCache {
public:
    class Node{
    public:
    int val;
    int key;
    Node* next;
    Node* prev;
    Node(int _key,int _val){
        key=_key;
        val=_val;
      
    }
    
};
    int cap;
          Node* head=new Node(-1,-1);
        Node* tail=new Node(-1,-1);
    map<int,Node*>m;
    LRUCache(int capacity) {
        cap=capacity;
  
        head->next=tail;
        tail->prev=head;
    }
    
    int get(int key) {
        if(m.find(key)==m.end())return -1;
        Node* nd=m[key];
        nd->prev->next=nd->next;
        nd->next->prev=nd->prev;
        add(nd);
        return nd->val;
            
    }
    
    void put(int key, int value) {
        if(m.find(key)!=m.end()){
            m[key]->val=value;
         Node* nd=m[key];
        nd->prev->next=nd->next;
        nd->next->prev=nd->prev;
            add(nd);
        }
        else if(cap==m.size()){
            deletee();
            Node* nod=new Node(key,value);
            add(nod);
        }
        else {
            Node* nod=new Node(key,value);
            add(nod);
        }
        
    }
    
    void deletee(){
        Node* nd=tail->prev;
        int key=nd->key;
        nd->prev->next=nd->next;
        nd->next->prev=nd->prev;
        m.erase(key);
        delete(nd);
    }
    void add(Node* nd){
        nd->next=head->next;
        head->next->prev=nd;
        head->next=nd;
        nd->prev=head;
        m[nd->key]=nd;
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */