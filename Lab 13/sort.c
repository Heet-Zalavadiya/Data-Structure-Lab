/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* sortList(struct ListNode* head) {
    if(head == NULL || head->next == NULL){
        return head;
    }
    struct ListNode *i = head;
    struct ListNode *j = NULL;

    while(i != NULL){
        j = i->next;
        while(j != NULL){
            if(i->val > j->val){
                int temp = i->val;
                i->val = j->val;
                j->val = temp;
            }
            j = j->next;
        }
        i = i->next;
    }
    return head;
}