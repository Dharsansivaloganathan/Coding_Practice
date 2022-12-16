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
    ListNode *detectCycle(ListNode *head) {
        unordered_set<ListNode *>S;
        ListNode *th = head;
        while(th!=NULL)
        {
            if(S.insert(th).second==false)
            return th;
            th = th->next;
        }
        return NULL;
        
    }
};
