#include<stdio.h>
#include<stdlib.h>

struct node{
    int data1;
    float data2;
    struct node *next;
    
};

typedef struct node Node;
Node *head=NULL;

void print(){
    printf("****printing the linked list****\n\n");
    Node *p=head;
    while (p!=NULL) {
        printf("%d  ",p->data1);
        printf("%.2f ",p->data2);
        p=p->next;
        
    }printf("\n");
    
} void insertB()
{
    printf("Inserting Node before Head:\n");
    int data1;
    float data2;
    
    Node *lk;
    lk=(Node *)malloc(sizeof(Node));
    printf("Enter the data item:");
    scanf("%d %f",&data1, &data2);
    lk->data1=data1;
    lk->data2=data2;
    lk->next=head;
    head=lk;
}
void insert_last_position()
{
    Node *ptr=head;
    if(ptr==NULL)
    {
       insertB();
       return;
    }
   printf("Inserting Node At last position:\n");
    Node *new_node;
    new_node=(Node *)malloc(sizeof(Node));
    int data1;
    float data2;
    printf("Enter the data item: ");
    scanf("%d %f",&data1,&data2);
    new_node->data1=data1;
    new_node->data2=data2;
    
    new_node->next=NULL;


    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    ptr->next=new_node;

}

void insertAnyposition(){
    int key1,key;
    float key2;
    printf("enter elements to insert:");
    scanf("%d , %f",&key1 ,&key2);
    printf("enter int part to insert after:");

    Node *ptr=head;
    while (ptr!=NULL) {
        {
            if(ptr->data1==key1){
                Node *newnode;
                newnode=(Node*)malloc(sizeof(Node));
                newnode->data1=key1;
                newnode->data2=key2;
                newnode->next=ptr->next;
                ptr->next=newnode;
                return;
            }
            
            else
                
                ptr=ptr->next;
        }
    }
    insert_last_position();

}

void delete_head()
{
    printf("Deleting Head\n");
    head=head->next;
}
void delete_last_node()
{
    printf("Deleting Last Node\n");
    Node *ptr=head;
    while(ptr->next->next!=NULL)
    {
        ptr=ptr->next;
    }
    ptr->next=NULL;
}
void delete_any_position()
{
    int key1;
    float key2;
    
    printf("Which node you want to delete (Enter the value): ");
    scanf("%d",&key1);
    scanf("%f",&key2);
    Node *ptr=head;
    Node *previous;
    if(ptr==NULL)
    {
        printf("Empty Linked list. So, delete operation is not possible.\n");
        return;
    }
    if(ptr!=NULL & ptr->data1==key1 && ptr->data2==key2)
    {
        head=ptr->next;
        return;
    }
    while(ptr!=NULL & ptr->data1!=key1 && ptr->data2!=key2)
    {
        previous=ptr;
        ptr=ptr->next;
    }
    if(ptr==NULL)
    {
        printf("The item is not present in the linked list that you want to delete.\n");
        return;
    }
    previous->next=ptr->next;
}

int main()
{   insertB();
    print();
    insert_last_position();
    print();
    insert_last_position();
    print();
    insert_last_position();
    print();
    
    insertAnyposition();
     print();
    
     delete_any_position();
     print();
    
  
     
     return 0;
 }










