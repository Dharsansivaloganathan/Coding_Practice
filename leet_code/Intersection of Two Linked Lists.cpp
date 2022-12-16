/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        typedef ListNode Node;
        unordered_set<Node*>S;
        Node *th1 =headA,*th2=headB;
        while(th1!=NULL)
        {
            S.insert(th1);
            th1=th1->next;
        }
        while(th2!=NULL)
        {
            if(S.insert(th2).second==false)
            return th2;
            th2=th2->next;
        }
        return NULL;
        
    }
};
