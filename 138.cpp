/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        unordered_map<Node* , Node*> mp ;
        Node* ptr = head ; 
        while(ptr){
            Node* copy = new Node(ptr -> val) ;
            mp[ptr] = copy ;
            ptr = ptr -> next ;
        }
        ptr = head ;
        while(ptr){
            Node* nxt = ptr -> next ;
            Node* rnd = ptr -> random ;
            mp[ptr]->next = mp[nxt] ;
            mp[ptr]->random = mp[rnd] ;
            ptr = ptr -> next ;
        }
        return mp[head] ;
    }
};
