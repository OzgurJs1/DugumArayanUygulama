#include <stdio.h>
#include <stdlib.h>
//Sýkýntýlý uygulama
struct node {
    int data;
    struct node *next;
};

struct node* createNode(int data) {
    struct node* newNode = (struct node*) malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void insertNode(struct node** head, struct node* newNode) {
    if (*head == NULL) {
        *head = newNode;
    } else {
        struct node* lastNode = *head;
        while (lastNode->next != NULL) {
            lastNode = lastNode->next;
        }
        lastNode->next = newNode;
    }
}

void searchNode(struct node* head, int key) {
    struct node* current = head;
    int found = 0;
    while (current != NULL) 
	{
        if (current->data == key) {
            printf("Node Bulundu!\n");
            found = 1;
            break;
        }
        current = current->next;
    }
       	if(!found)
		{
    	printf("Node Bulunmadi!\n");
		}
}

void printList(struct node* head) {
    struct node* current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
}

int main() {
    struct node* head = NULL;
    
    insertNode(&head, createNode(1));
    
	insertNode(&head, createNode(2));
    
	insertNode(&head, createNode(3));
    
	insertNode(&head, createNode(4));
    
	insertNode(&head, createNode(5));
    
	printf("List: ");
    
	printList(head);
    
	printf("\n");
    
	searchNode(head, 3);
	    
	searchNode(head, 6);
	
	searchNode(head, 12);
	return 0;
}

