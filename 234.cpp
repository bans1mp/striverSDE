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

    ListNode* revList(ListNode* node){
        if(!node || !node -> next) return node ;
        ListNode* k = revList(node -> next) ;
        node -> next -> next = node ;
        node -> next = NULL ;
        return k ;
    }

    bool isPalindrome(ListNode* head) {
        ListNode *s = head , *f = head ;
        while(f -> next && f -> next -> next){
            s = s -> next ;
            f = f -> next -> next ;
        }
        ListNode* head2 = s -> next ;
        s -> next = NULL ;
        head2 = revList(head2) ;
        while(head && head2){
            if(head -> val != head2 -> val) return false ;
            head = head -> next ;
            head2 = head2 -> next ;
        }
        return true ;
    }
};
