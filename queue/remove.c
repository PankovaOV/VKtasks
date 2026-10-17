#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node * next;
};

struct Node* remove(struct Node* head, int val) {
    struct Node * dummy = (struct Node *)malloc(sizeof(struct Node));
    dummy->data = 0;
    dummy->next = head;

    struct Node* prev = dummy;
    struct Node* curr = head;

    while (curr != NULL) {
        if (curr->data == val) {
            prev->next = curr->next;
            free(curr);
            curr = prev->next;
        } else {
            prev = curr;
            curr = curr->next;
        }
    }

    struct Node* newHead = dummy->next;
    free(dummy);
    return newHead;
}
