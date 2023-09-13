#include <stdio.h>
#include<stdlib.h>
#include<string.h>

struct node{
    int data;
    struct node *next;
    
};

struct node *head=NULL;

void print()
{
    printf("printing the linked list:\n");
   struct node *p=head;
    while (p!=NULL) {
        printf("%d ",p->data);
        p=p->next;
    }printf("\n");
}
void insertEnd()
{
    printf("Inserting Node before head:\n");
    int data;
    struct node *newNode;
    newNode =(struct node*)malloc(sizeof(struct node));
    printf("enter the data item:\n");
    scanf("%d",&data);
    newNode->data=data;
    newNode->next=NULL;
    struct node *ptr = head ;
    while (ptr->next!=NULL) {
        ptr=ptr->next;
    }
    ptr->next=newNode;
    
 
}
int main()
                     {
        insertEnd();
       
        print();
         insertEnd();
      print();
        return 0;
                     }
                      
