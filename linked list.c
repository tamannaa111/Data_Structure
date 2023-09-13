#include<stdio.h>
#include<stdlib.h>
struct Node{
 int x;
 struct Node *next;
};
typedef struct Node node;
int main()
{
    node *head;
    head=(node *)malloc(sizeof(node));
    head->x=10;
    head->next=NULL;
    printf("%d\n",head->x);

    return 0;
}
