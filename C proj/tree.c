#include <stdio.h>
#include <stdlib.h>

//int arr[]= {45, 1, 2, 3, 4, 5, 6, 7, 8, 9};

typedef struct Tree {int data; struct Tree* left; struct Tree* right;} Tree;

typedef Tree* TREE;

TREE createTree(int d, TREE rt){
    rt = malloc(sizeof(Tree));
    rt->data = d;
    rt->left = NULL;
    rt->right= NULL;
    return rt;
}

TREE arrayToTree(int* arr, int cnt, unsigned int size, TREE* rt){
    if (cnt>=size) return NULL;
    *rt = createTree(arr[cnt], *rt);
    TREE p1 = createTree(arr[cnt*2+1], p1);
    TREE p2 = createTree(arr[cnt*2+2], p2);
    (*rt)->left = p1;
    (*rt)->right = p2;
    (*rt)->left = arrayToTree(arr, cnt*2+1, size, &p1);
    (*rt)->right = arrayToTree(arr, cnt*2+2, size, &p2);
    return *rt;
}

void printTree(TREE rt){
    if (rt == NULL) return;
    printf ("%d\n", rt->data);
    TREE p1 = rt->left;
    TREE p2 = rt->right;
    printTree(p1);
    printTree(p2);
}

int main(void){
    int arr[]= {45, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    const unsigned int size = sizeof(arr) / sizeof(int);

    TREE root = arrayToTree(arr, 0, size, &root);
    printTree(root);

    return 0;
}
