/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public: unordered_map<Node*,Node*>cpp;

    Node* copyRandomList(Node* head) {
        Node* temp=head;
        if(!head)return NULL;

        while(temp){
            Node* copy=new Node(temp->val);
            cpp[temp]=copy;
            temp=temp->next; }

        temp=head;
        while(temp){
            Node* copy=cpp[temp];
            copy->next=cpp[temp->next];
            copy->random=cpp[temp->random]; 
            temp=temp->next;    }

            return cpp[head];

    }
};
