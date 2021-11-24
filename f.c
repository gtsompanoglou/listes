#include "head.h"

int init_list(list_t* list){
    list->head=NULL;
    return 0;
}

int insert_at_head(list_t* list,int data){
    list->head=(node_t*)malloc(sizeof(node_t));
    list->head->data=data;
    return 0;
}

int insert_sorted(list_t* list,int data){
    list->head->next=(node_t*)malloc(sizeof(node_t));
    //pos tha ekpharso ta dedomena toy next? 
    return 0;
}

void menu(){ 
    printf("\n1.Enter new node data");
    printf("\n2.Clear the screen");
    printf("\n3.Print the list");
    printf("\n4.Enter at head");
    printf("\n5.exit");
}