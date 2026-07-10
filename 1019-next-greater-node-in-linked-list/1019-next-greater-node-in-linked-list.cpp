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
    vector<int> nextLargerNodes(ListNode* head) {
        stack<pair<int,int>>st;
        vector<int>v;int n=v.size();

        while(head!=nullptr){
            v.push_back(0);

         while(!st.empty()&&st.top().second<head->val) {
            v[st.top().first]=head->val;st.pop();
        }

        st.push({v.size()-1,head->val});
     head=head->next;

        }   return v;
    }
};