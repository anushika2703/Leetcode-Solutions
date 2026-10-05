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
       ListNode* curr=head;
       int l=0;
       while(curr!=nullptr){
        l++;
        curr=curr->next;
       }
       if(l==n){
        return head->next;
       }
       if(l==0 || l==1) return NULL;
       int k=l-n;
       ListNode* temp=head;
       while(k>1){
          temp=temp->next;
          k--;
       } 
       temp->next=temp->next->next;
       return head;
    }
};