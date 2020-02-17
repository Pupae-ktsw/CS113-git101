/*6210406611 Punthita Khanthisuwan */

#include<stdio.h> 
#include<stdlib.h> 
  
struct Node { 
    int data; 
    struct Node* next; 
}; 

void fsortInput(struct Node** headPtr, struct Node* new_NODE) { 
    struct Node* recent; 
    if (*headPtr == NULL || (*headPtr)->data >= new_NODE->data) { 
        new_NODE->next = *headPtr; 
        *headPtr = new_NODE; 
    } 
    else { 
        recent = *headPtr; 
        while (recent->next!=NULL && recent->next->data < new_NODE->data) { 
            recent = recent->next; 
        } 
        new_NODE->next = recent->next; 
        recent->next = new_NODE; 
    } 
} 

struct Node *fnewNode(int new_DATA) { 
    struct Node* new_NODE = (struct Node*)malloc(sizeof(struct Node)); 
    new_NODE->data = new_DATA; 
    new_NODE->next = NULL; 
    return new_NODE; 
} 
  
void printNode(struct Node *head) { 
    struct Node *tmp = head; 
    while(tmp != NULL) { 
        printf("%d\n", tmp->data); 
        tmp = tmp->next; 
    } 
} 

int main() { 
    struct Node* head = NULL; 
    struct Node *new_NODE;
    int input;
    while (1){
        scanf("%d", &input);
        if (input<=-1) break;
        else {
            new_NODE = fnewNode(input); 
            fsortInput(&head, new_NODE); 
        }
    }printNode(head); 
} 