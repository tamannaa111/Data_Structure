#include<stdio.h>
#include<stdlib.h>
#include<string.h>
indertEnd();

struct node{
    
    int data;
    struct node *next;
    
};
typedef struct node Node;
Node *head=NULL;

void print()
{
    printf("printing the linked list:\n");
    
    Node *p=head;
    while (p!=NULL) {
        printf("%d ",p->data);
        p=p->next;
    }printf("\n");
    
    
}

void insertFirst(){
int data;
    printf("*****Inserting node before head*****\n");
    Node *newNode;
    newNode=(Node*)malloc(sizeof(Node));
    
    printf("Enter data: ");
    scanf("%d",&data);
    
    newNode->data=data;
    newNode->next=head;
    head=newNode;
    
    
}

void insertEnd(){
    
    int data;
    printf("****8Inserting data at the End*****\n");
    Node *newNode;
    newNode=(Node*)malloc(sizeof(Node));
    
    printf("Enter data item: ");
    scanf("%d",&data);
    
  newNode->data=data;
    newNode->next=NULL;
    
    Node *ptr = head;
    while (ptr->next!=NULL) {
        ptr=ptr->next;     //ptr++;
    }
    ptr->next=newNode;
    
    
}
int insertionAny(){
    Node *ptr=head;
    int key;
    printf("Enter key:");
    scanf("%d",&key);
    while (ptr!=NULL) {
        if (ptr->data==key)
        {
                Node *newNode;
                newNode=(Node*)malloc(sizeof(Node));
                int data;
                printf("Enter data: ");
                scanf("%d",&data);
                newNode->data=data;
                newNode->next=ptr->next;
                ptr->next=newNode;
                return 0;
                
            }else{
                ptr=ptr->next;
            
            }
        indertEnd();
    }
    



int main()
    {
    insertFirst();
    print();
    insertFirst();
    print();
    insertEnd();
    print();
    insertionAny();
    
    insertEnd();
    print();
    
    
}

