#include <stdio.h>
#include "list.h"

int main(){

    Node_t *head = NULL;
    int test_numbers[10] = {54,10,25,91,85,40,42,50,58,78};
  
    for(int i=0;  i<10; i++){
        if(head == NULL){
            head = init_list(test_numbers[i]);
        }
        else{
            append(head, test_numbers[i]);
        }   
    }
 
    printf("------------List at the beggining---------\n");
    print_list(head);

    printf("------------after insertion---------------\n");
    append(head, 2);
    append(head, 4);

    print_list(head);

    printf("------------after deletion---------------\n");
    delete(head, 54);
    delete(head, 40);
    print_list(head);
   

    printf("------------Searching for value: 10-------------\n");
    printf("%s\n", search(head, 10) ? "true" : "false");
    printf("------------Searching for value: 11-------------\n");
    printf("%s\n", search(head, 11) ? "true" : "false");

    printf("-----------Pushing values to the beginning of the list--------------\n");
    push(&head, 11);
    print_list(head);

}
