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
    ListNode* temp = head;
    int c =0;
    while(temp !=0){
        c++;
        temp= temp -> next;
    }
    if(n>c){
        return NULL;
    }
    if(c-n==0){
        head=head->next;
        return head;
    }
    ListNode* curr = head;
    temp = head;

    for(int i=0;i<c-n;i++){
        curr=temp;
        temp=temp->next;

    }
    curr->next=temp->next;
    return head;


   

    }

};