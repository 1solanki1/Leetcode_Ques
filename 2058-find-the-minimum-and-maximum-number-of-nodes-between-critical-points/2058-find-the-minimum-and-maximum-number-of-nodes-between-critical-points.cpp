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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        int first =-1,last=-1, mindis=INT_MAX, prev_val=head->val;\
        
        ListNode* curr=head->next;int pos=1;
        while(curr&&curr->next){
            int v=curr->val,nxt=curr->next->val;
bool critical=(v<prev_val&&v<nxt)||(v>prev_val&&v>nxt);

    if(critical){if(first==-1)first=pos;
                else mindis=min(mindis,pos-last);
                last=pos;
                }

                prev_val=v;
                curr=curr->next;
                pos++;}
                
if(first==last)return {-1,-1};
return {mindis,last-first};

        }
};