/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
int findGCD(struct ListNode* p, struct ListNode* q) {
    int num1 = p->val;
    int num2 = q->val;

    if (num1 < num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }
    for (int i = num2; i > 0; i--) {
        if (num2 % i == 0 && num1 % i == 0) {
            return i;
        }
    }
    return 1;
}

struct ListNode* insertGreatestCommonDivisors(struct ListNode* head) {

    struct ListNode* p = head;
    struct ListNode* q = head->next;
    while (q != NULL) {
        int gcd = findGCD(p, q);
        struct ListNode* new =
            (struct ListNode*)malloc(sizeof(struct ListNode));
        new->val = gcd;
        new->next = p->next;
        p->next = new;

        p = p->next->next;
        q = q->next;
    }
    return head;
}