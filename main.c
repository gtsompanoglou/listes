#include "f.c"

int main(int argc, char const *argv[])
{
    int choice=0,tempdata=0;
    list_t* l;
    while (1)
    {
        menu();
        printf("\nChoice:");
        scanf("%d", &choice);
            if(choice==1){
                printf("\nEnter your data:");
                scanf("%d", &tempdata);
                insert_sorted(&l,tempdata);
            }else if(choice==2){
                sytem("clear");
            }else if(choice==3){
                continue;
                //print the list_t
            }else if(choice==4){                
                printf("\nEnter your data:");
                scanf("%d", &tempdata);
                insert_at_head(&l,tempdata);
            }else if(choice==5){
                exit(EXIT_SUCCESS);
            }
        
    }
    
    return 0;
}
