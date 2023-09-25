#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//setting struct integerList to intList type
typedef struct integerList {int data; struct integerList* nextOne;} intList_t;

// generates an array of random values from 1 to size including
int* generateAnArray(int size){
    int* arr = malloc(size*sizeof(int));
    
    srand(time(NULL));
    for (int i=0; i<size; ++i){
        arr[i] = rand() % (size+1);
    }
    return arr;
}

// creates a list Node
intList_t* createNode (int a){
    intList_t* h = malloc(sizeof(intList_t));
    
    h->data = a;
    h->nextOne = NULL;
    return h;
}

// adds member to the begining of a list
intList_t* addMember(int mem, intList_t* head){
    intList_t* h = createNode (mem);
    h->nextOne = head;
    return h;
}

//converts an array to a list
intList_t* arrayToList(int* intArray, int size){
    intList_t* head = createNode(intArray[0]);
    for (int i=1; i < size; i++){
        head = addMember(intArray[i], head);
    }
    return head;
}

//sorts the given list
void sortList(intList_t* head, int size){
    
    intList_t* ptr = head;
    for (int i; i<size; i++){
        while(ptr->nextOne != NULL){
            if (ptr->data > ptr->nextOne->data) {
                int temp= ptr->data;
                ptr->data=ptr->nextOne->data;
                ptr->nextOne->data = temp;
            }
            ptr=ptr->nextOne;
        }
        ptr=head;
    }
}

//prints the given list 
void print_list(intList_t *h)
{
    while (h != NULL){
    printf ("%d -> ", h -> data);
    h = h -> nextOne;
    }
}

//the main function
int main (void){
    
    const int SIZE = 100;                         //creating an array of random integers 
    int* intArray = generateAnArray(SIZE);        //and converting it to a list
    intList_t* head = arrayToList(intArray, SIZE);
    
    print_list(head);    //printing an original list
    printf("\n\n");
    sortList(head, SIZE);//sorting and 
    print_list(head);    //printing sorted list
    
    
    free(intArray);            //free allocated memory
    while (head != NULL) {
        intList_t* temp = head;
        head = head->nextOne;
        free(temp);
    }
    return 0;
}