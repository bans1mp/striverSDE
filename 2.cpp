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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy = new ListNode(0) ;
        ListNode* temp = dummy ;
        ListNode* temp2 ;
        ListNode* a = l1 ;
        ListNode* b = l2 ;
        int carry = 0 ;
        while(a || b){
            int t1 = 0 , t2 = 0 ;
            if(a){
                t1 = a->val ;
            }
            if(b){
                t2 = b -> val ;
            }
            int sum = t1 + t2 + carry ;
            carry = sum/10 ;
            sum = sum%10 ;
            
            temp -> val = sum ;
            ListNode* added = new ListNode(0) ;
            temp -> next = added ;
            temp2 = temp ;
            temp = temp -> next ;
            if(a ){
                a = a-> next ;
            }
            if(b ){
                b = b-> next ;
            }
            
            
        }
        if(carry > 0){
            temp -> val = carry ;
            return dummy ;
        }
        else{
            temp2 -> next = NULL ;
            return dummy ;
        }
    }
};
