/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* swapPairs(struct ListNode* head) {
    if (head == NULL || head->next == NULL) {
        return head;
    }
    struct ListNode dummy;
    dummy.next = head;
    struct ListNode* pred = &dummy;
    struct ListNode* p = head;
    struct ListNode* q = head->next;
    while (q != NULL) {
        p->next = q->next;
        q->next = p;
        pred->next = q;

        pred = p;
        p = p->next;
        if (p != NULL) {
            q = p->next;
        } else {
            break;
        }
    }
    return dummy.next;
}
