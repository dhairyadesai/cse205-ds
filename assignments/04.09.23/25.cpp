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
    
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL && head->next==NULL){
            return head;
        }
        ListNode* temp=head;
        int count=0;
        while(count<k && temp!=NULL){
            temp=temp->next;
            count++;
        }
        if(count<k){
            return head;
        }
        int cnt=0;
        ListNode* curr=head;
        ListNode* prev=NULL;
        ListNode* forward=NULL;
        while(curr!=NULL && cnt<k){
            forward=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forward;
            cnt++;
        }
        if(forward!=NULL){
            head->next=reverseKGroup(forward,k);

        }
        return prev;

    }
};