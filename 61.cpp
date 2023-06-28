/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head) return NULL ;
        ListNode* ptr = head; 
        int n = 1 ;
        while(ptr -> next){
            ptr = ptr->next ;
            n++ ;
        }
        ptr -> next = head ;
        ptr = head ;
        k = k%n ;
        int moves = n - k ;
        
        while(moves > 1){
            ptr = ptr -> next ;
            moves-- ;
        }
        ListNode* ending = ptr ;
        ptr = ptr -> next ;
        ending -> next = NULL ;
        return ptr ;
        
    }
};
