/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int n = 0 , m = 0 ;
        ListNode* a = headA ;
        while(a){
            n++ ;
            a = a->next ;
        }
        ListNode* b = headB ;
        while(b){
            m++ ;
            b = b->next ;
        }
        int t = abs(n - m) ;
        a = headA ;
        b = headB ;
        if(n > m){
            while(t--){
                a = a-> next ;
            }
        }
        else{
            while(t--){
                b = b-> next ;
            }
        }
        while(a && a != b){
            a = a-> next ;
            b = b-> next ;
        }
        return a ;
    }
};
