//
//  main.c
//  struct
//
//  Created by Tamanna Akter on 9/8/23.
//

#include <stdio.h>
#include<string.h>

struct Book{
    int id;
    char name[30];
    float price;
    
};

int main(){
    struct Book book1,book2;
    book1.id=1;
 
    strcpy(book1.name,"Data structure");
    book1.price=100.0;
    printf("the id is: %d\n",book1.id);
    printf("the name is: %s\n",book1.name);
    printf("the price is: %f\n",book1.price);
    book1.id=1;
 
    strcpy(book2.name,"Data");
    book2.price=10.0;
    printf("the id is: %d\n",book2.id);
    printf("the name is: %s\n",book2.name);
    printf("the price is: %f\n",book2.price);
}
