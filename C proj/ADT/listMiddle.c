#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

typedef struct Listnode {
    int val;
    struct Listnode *next;
}ListNode;


int* generateAnArray(int size){
    int* arr = malloc(size*sizeof(int));
    
    srand(time(NULL));
    for (int i=0; i<size; ++i){
        arr[i] = rand() % (size+1);
    }
    return arr;
}

// creates a list Node
ListNode* createNode (int a){
    ListNode* h = malloc(sizeof(ListNode));
    
    h->val = a;
    h->next = NULL;
    return h;
}

// adds member to the begining of a list
ListNode* addMember(int mem, ListNode* head){
    ListNode* h = createNode (mem);
    h->next = head;
    return h;
}

//converts an array to a list
ListNode* arrayToList(int* intArray, int size){
    ListNode* head = createNode(intArray[0]);
    for (int i=1; i < size; i++){
        head = addMember(intArray[i], head);
    }
    return head;
}

//sorts the given list
void sortList(ListNode* head, int size){
    
    ListNode* ptr = head;
    for (int i; i<size; i++){
        while(ptr->next != NULL){
            if (ptr->val > ptr->next->val) {
                int temp= ptr->val;
                ptr->val=ptr->next->val;
                ptr->next->val = temp;
            }
            ptr=ptr->next;
        }
        ptr=head;
    }
}

//prints the given list 
void print_list(ListNode *h)
{
    while (h != NULL){
    printf ("%d -> ", h -> val);
    h = h -> next;
    }
}

ListNode* MiddleElement (ListNode* head){
    int len=0;
    ListNode* ptr = head;
    while (ptr != NULL){
        ptr = ptr->next;
        len++;
    }
    len = len % 2 ? (len / 2 + 1) : (len / 2);
    for (int i=1; i < len; i++){
        head=head->next;
    }
    return head;
}

int main (void){
    const unsigned int size = 4;
    int* array = generateAnArray(size);

    for (int i=0; i<size; i++){
        printf("%d ", array[i]);
    }
    printf ("\n\n");

    ListNode* list = arrayToList (array, size);
    print_list(list);
    printf ("\n\n");

    ListNode* mid = MiddleElement(list);
    printf("%d", mid->val);
    printf ("\n\n");

    return 0;
}