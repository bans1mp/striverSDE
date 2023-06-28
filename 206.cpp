class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(!head || !head -> next) return head ;
        ListNode* a = reverseList(head -> next) ;
        if(head -> next) head -> next -> next = head ;
        head -> next = NULL ;
        return a; 
    }
};
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
       ListNode *nextNode, *prevNode = NULL;
        while (head) {
            nextNode = head->next;
            head->next = prevNode;
            prevNode = head;
            head = nextNode;
        }
        return prevNode;
    }
};
