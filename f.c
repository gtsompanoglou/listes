#include "head.h"

int init_list(list* list){
    list->head=NULL;
    return 0;
}

int insert_at_head(list* list,int data){
    node* new_node;
    new_node=(node*)malloc(sizeof(node));
    new_node->data=data;
    new_node->next=NULL;

    list->head=new_node;
    return 0;
}

int insert_sorted(list* list,int data){
    node* prev;
    node* cur;
    node* new_node;
    prev=(node*)malloc(sizeof(node));
    cur=(node*)malloc(sizeof(node));
    new_node=(node*)malloc(sizeof(node));
    return 0;
}

void printList(list* l,node* start_node){
    node* cur;
    cur=(node*)malloc(sizeof(node));
    while (start_node->next != NULL)
    {
        printf("\nData is : %d",start_node->data);
    }
    
}



void menu(){ 
    printf("\n1.Enter new node data");
    printf("\n2.Clear the screen");
    printf("\n3.Print the list");
    printf("\n4.Enter at head");
    printf("\n5.exit");
}