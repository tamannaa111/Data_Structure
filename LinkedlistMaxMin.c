#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};
typedef struct node Node;
Node *head=NULL;

void print()
{
    printf ("printing the linked list :\n");
    Node *p=head;
    while (p!=NULL)
    {
        printf("%d",p->data);
        p=p->next;
    }

    printf("\n");
    
}
void largest(){
    Node *p=head;
   
    int max =p->data;
    while (p!=NULL) {
        if (max<p->data) {
            max=p->data;
        }p=p->next;
    }
    printf("max= %d",max);
    
    
}void minimum(){
    Node *p=head;
  
    int min =p->data;
    while (p!=NULL) {
        if (min>p->data) {
            min=p->data;
        }p=p->next;
    }
    printf("min =%d",min);
    
    
}
    
    
    
void  insertB()
{
    printf("inserting Node before Head :\n");
    int data;
    Node *lk;
    lk=(Node *)malloc (sizeof (Node));
    printf("Enter the data item :");
    scanf ("%d",&data);
    lk->data=data;
    lk->next=head;
    head=lk;
}




int main()
{
    insertB();
    print();

    insertB();
    print();
    largest();
    minimum();

    return 0;







}
