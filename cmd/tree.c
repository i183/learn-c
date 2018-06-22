#include <stdio.h>
#include <string.h>
#include <mm_malloc.h>
#include <math.h>

typedef struct TreeNode *BinTree;

struct TreeNode {

    void *item;

    BinTree left;

    BinTree right;

};

typedef void (*PF)(void *item);

void preOrderTraversal(BinTree bt, PF pf);

void inOrderTraversal(BinTree bt, PF pf);

void postOrderTraversal(BinTree bt, PF pf);

void printInt(void *item);

int *createInt(int i);

BinTree createBinTree();

void treeRun() {
    BinTree root = createBinTree();
    root->item = createInt(1);

    BinTree A2 = createBinTree();
    A2->item = createInt(2);
    BinTree A3 = createBinTree();
    A3->item = createInt(3);
    BinTree A4 = createBinTree();
    A4->item = createInt(4);
    BinTree A5 = createBinTree();
    A5->item = createInt(5);
    BinTree A6 = createBinTree();
    A6->item = createInt(6);
    BinTree A7 = createBinTree();
    A7->item = createInt(7);
    BinTree A8 = createBinTree();
    A8->item = createInt(8);
    BinTree A9 = createBinTree();
    A9->item = createInt(9);

    root->left = A2;
    A2->left = A3;
    A3->left = A4;
    A3->right = A5;
    A5->left = A6;

    root->right = A7;
    A7->left = A9;
    A7->right = A8;


    preOrderTraversal(root, printInt);
    printf("\n");
    inOrderTraversal(root, printInt);
    printf("\n");
    postOrderTraversal(root, printInt);
    printf("\n");
}

void preOrderTraversal(BinTree bt, PF pf) {
    if (bt) {
        pf(bt->item);
        preOrderTraversal(bt->left, pf);
        preOrderTraversal(bt->right, pf);
    }
}

void inOrderTraversal(BinTree bt, PF pf) {
    if (bt) {
        inOrderTraversal(bt->left, pf);
        pf(bt->item);
        inOrderTraversal(bt->right, pf);
    }
}

void postOrderTraversal(BinTree bt, PF pf) {
    if (bt) {
        postOrderTraversal(bt->left, pf);
        postOrderTraversal(bt->right, pf);
        pf(bt->item);
    }
}

void printInt(void *item) {
    printf("%d ", *((int *) item));
}

int *createInt(int i) {
    int *p = malloc(sizeof(int));
    *p = i;
    return p;
}

BinTree createBinTree() {
    BinTree bt = malloc(sizeof(struct TreeNode));
    bt->item = NULL;
    bt->left = NULL;
    bt->right = NULL;
    return bt;
}