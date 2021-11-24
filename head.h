#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node
{
    int data;
    struct node_t* next;
}node_t;

typedef struct list
{
    node_t* head;
}list_t;


void menu();