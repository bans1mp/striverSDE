

/* Node structure  used in the program

struct Node{
	int data;
	struct Node * next;
	struct Node * bottom;
	
	Node(int x){
	    data = x;
	    next = NULL;
	    bottom = NULL;
	}
	
};
*/

/*  Function which returns the  root of 
    the flattened linked list. */
    
Node* merge(Node* a , Node* b){
    Node* dummy = new Node(0); 
    Node* temp = dummy ;
    while(a != NULL && b != NULL){
        if(a-> data < b -> data){
            temp -> bottom = a ;
            a = a-> bottom ;
            temp = temp -> bottom ;
        }
        else{
            temp -> bottom = b ;
            b = b-> bottom ;
            temp = temp -> bottom ;
        }
        
    }
    if(a == NULL){
        temp -> bottom = b ;
    }
    else temp -> bottom = a ;
    
    return dummy -> bottom ;
}

Node *flatten(Node *root)
{
   // Your code here
   if(!root || !(root -> next)) return root ;
   root -> next = flatten(root -> next) ;
   Node* res = merge(root , root -> next) ;
   return res ;
}
