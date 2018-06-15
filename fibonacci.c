#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct Node {
    int data;
    struct Node *next;
} *NP;

int IsF(NP head);

NP createNode(int data);

NP createListNode(int *p, int size);

int fibonacci();

int *createFBList(int size);

void fbRun(int size) {
    int *li = createFBList(size);
    NP head = createListNode(li, size);
    printf("%d\n", IsF(head));
    for (int i = 0; i < 10; ++i) {
        printf("%d\n", fibonacci());
    }
}

int IsF(NP head) {
    NP n1 = head, n2 = head->next;
    if (n1->data != 0 || n2->data != 1) {
        return 0;
    }

    for (NP np = n2->next; np; np = np->next) {
        if (n1->data + n2->data != np->data) {
            return 0;
        }

        n1 = n2;
        n2 = np;
    }

    return 1;
}

NP createNode(int data) {
    NP np = malloc(sizeof(struct Node));
    np->data = data;
    np->next = NULL;
    return np;
}

NP createListNode(int *p, int size) {
    NP head = createNode(*p), last = head;
    for (int i = 1; i < size; ++i) {
        last->next = createNode(p[i]);
        last = last->next;
    }
    return head;
}

int fibonacci() {
    static int f1 = 0, f2 = 1;
    int temp1 = f1, temp2 = f2;
    f2 = f1 + f2;
    f1 = temp2;
    return temp1;
}

int *createFBList(int size) {
    int *li = malloc(sizeof(int) * size);
    for (int i = 0; i < size; ++i) {
        li[i] = fibonacci();
    }
    return li;
}