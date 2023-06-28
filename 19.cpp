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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* itr ;
        itr = head ;
        int len = 1 ;
        
        while(itr->next != NULL){
            itr = itr->next ;
            len++;
        }
        
        if(len==1){
            if(n==1) return nullptr ;
            else return head ;
        }
        
        itr = head ;
        int fromStart = len - n + 1 ;
        
        if(fromStart == 1){
            itr = itr->next ;
            return itr ;
        }
        
        for(int i = 1 ; i < fromStart-1 ; i++){
            itr = itr->next ;
        }
        ListNode* joiner ;
        joiner = itr ;
        joiner = joiner-> next ;
        joiner = joiner -> next ;
        
        itr -> next = joiner ;
        
        return head ;
    }
};
