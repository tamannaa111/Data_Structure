#include<stdio.h>
#include<stdlib.h>
#include<string.h>


struct node{
    
    char data[10];
    struct node *next;
    
};
typedef struct node Node;
Node *head=NULL;

void print()
{
    printf("printing the linked list:\n");
    
    Node *p=head;
    while (p!=NULL) {
        printf("%s ",p->data);
        p=p->next;
    }printf("\n");
    
    
}

void insertFirst(){
char data[10];
    printf("*****Inserting node before head*****\n");
    Node *newNode;
    newNode=(Node*)malloc(sizeof(Node));
    
    printf("Enter data: ");
    scanf("%s",data);
    
    strcpy(newNode->data,data);
    newNode->next=head;
    head=newNode;
    
    
}

void insertEnd(){
    
    char data[10];
    printf("****8Inserting data at the End*****\n");
    Node *newNode;
    newNode=(Node*)malloc(sizeof(Node));
    
    printf("Enter data item: ");
    scanf("%s",data);
    
   strcpy( newNode->data,data);
    newNode->next=NULL;
    
    Node *ptr = head;
    while (ptr->next!=NULL) {
        ptr=ptr->next;     //ptr++;
    }
    ptr->next=newNode;
    
    
}
int main(){
    insertFirst();
    print();
    insertFirst();
    print();
    insertEnd();
    print();
    
    
    insertEnd();
    print();
    
   
    
}

