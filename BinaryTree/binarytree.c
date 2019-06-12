#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int value;
    struct node *left;
    struct node *right;
}node_t;


void init_tree(struct node **root, int value){
    struct node *current = *root;
    // initialize root node if root = NULL
    if(!current){
        current = malloc(sizeof(struct node));
        current->value = value;
        *root = current;
    }

}

struct node* new_node(int value){
    struct node *new = NULL;
    new = malloc(sizeof(struct node));
    new->value = value;
    new->left = NULL;
    new->right = NULL;
    return new;
}

/*
 * Function: insert
 * Arguments: struct node **, value
 * Inserts new node into binary tree
 */ 
void insert(struct node *nd, int value){
    
    if(nd->value > value){
        if(!nd->left){
            nd->left = new_node(value);
        }
        else{
            insert(nd->left, value);
        }
    }
    else if(nd->value < value){
        if(!nd->right){
            nd->right = new_node(value);
        }
        else{
            insert(nd->right, value);
        }
    }
}

void in_order(struct node *nd){
    if(nd){
        in_order(nd->left);
        printf("%d \n", nd->value);
        in_order(nd->right);
    }
}

void search(struct node *nd, int value){
    if(node){
        if(node->value == value){
            printf("True");
            return;
        }
        else{
            if(node->value > value){
                if(node->left){
                    if(node->left == value){
                        printf("True");
                        return;
                    }
                    else{
                        search(node->left, value);
                    }
                }
            }
            if(node->value > value){
                if(node->left){
                    if(node->left == value){
                        printf("True");
                        return;
                    }
                    else{
                        search(node->left, value);
                    }
                }
            }


        }
    }
}

void main(){
    struct node *root = NULL;
    int test_numbers[10] = {54,10,25,91,85,40,42,50,58,78};

    for(int i=0; i<10; i++){
        if(!root){
            init_tree(&root, test_numbers[i]);
        }
        else{
            insert(root, test_numbers[i]);
        }
    }

    printf("------------------In Order Traversal-------------------\n");
    in_order(root);
    printf("------------------AS IS-------------------------------\n");
    printf("Has to be implemented\n");
    printf("--- Search-(58)------\n");

    search(root, 58);
}
