#include<stdio.h>
#include<string.h>
struct Book{
  int id;
  char name[30];
  float price;

} ;
int main()
{
    struct Book book1, book2;
    book1.id=1;
    strcpy(book1.name,"Data Structure");
    book1.price=100.0;
    printf("The ID is %d\n",book1.id);
    printf("The Name is %s\n",book1.name);
    printf("The Price is %f\n",book1.price);

    return 0;
}
