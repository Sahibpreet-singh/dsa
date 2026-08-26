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
    ListNode* reverse(ListNode* head) {
    ListNode* prev = nullptr;
    ListNode* current = head;
    ListNode* next = nullptr;

    while (current != nullptr) {
        next = current->next; // Store the next node
        current->next = prev; // Reverse the current node's pointer
        prev = current;       // Move prev to current
        current = next;       // Move to the next node
    }
 
    return prev;
}
    ListNode* reverse1( ListNode* ptr,int k){
        k-=1;
        while(ptr!=NULL&&k>0){
            k--;
            ptr=ptr->next;
        }
        return ptr;
    } 
   
   
    ListNode* reverseKGroup(ListNode* head, int k) {
       ListNode*ptr=head;
    
       ListNode*knode;
        ListNode *prev=NULL;
        while(ptr!=NULL){
            knode=reverse1(ptr,k);
          
            if(knode==NULL){
                if(prev)prev->next=ptr;
                break;
            }
            ListNode*next=knode->next;
            knode->next=NULL;
            reverse(ptr);
            if(ptr==head){
                head=knode;
            }
            else {prev->next=knode;
            }
            prev=ptr;
            ptr=next;

        }
      return head;  


        
        
    }
};





