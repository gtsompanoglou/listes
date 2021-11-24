#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node
{
    int data;
    struct node_t* next;
}node;

typedef struct list
{
    node* head;
}list;

void menu();

void printList(list* l);