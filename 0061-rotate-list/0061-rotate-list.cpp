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
        if(!head||!head->next||!k)return head;
        int n=1;ListNode* tail=head;
        while(tail->next){tail=tail->next;
        n++;}

        while(!(k%=n)){return head;}
        
        tail->next=head;

for(int i=0;i<n-k-1;i++)
head=head->next;
    ListNode* A=head->next;
head->next=nullptr;
return A;  
    }
};