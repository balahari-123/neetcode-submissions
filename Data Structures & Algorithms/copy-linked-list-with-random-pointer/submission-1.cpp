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
public:
    Node* copyRandomList(Node* head) {
        if(!head) return nullptr;
        Node* newHead = new Node(head->val);
        Node* oldCurr = head->next;
        Node* newCurr = newHead;
        unordered_map<Node*, Node*> m;
        m[head] = newHead;
        while(oldCurr){
            Node* temp = new Node(oldCurr->val);
            newCurr->next = temp;
            m[oldCurr] = temp;
            newCurr = newCurr->next;
            oldCurr = oldCurr->next;
        }
        oldCurr = head; newCurr = newHead;
        while(oldCurr){
            newCurr->random = m[oldCurr->random];
            oldCurr = oldCurr->next; newCurr = newCurr->next;
        }
        return newHead;
    }
};
