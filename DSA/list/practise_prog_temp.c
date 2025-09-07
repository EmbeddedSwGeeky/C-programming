/**
 * @file practise_prog_temp.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2025-09-07
 * 
 * @copyright Copyright (c) 2025
 *
 */
#include <stdio.h>
#include <stdlib.h>


struct node {
    int data;
    struct node *next;
};

struct node*  create_node(int value) {
    /** allocate moeory for node **/
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    /**check for memory alloc status */
    if (newnode == NULL) {
        printf("alloc fail\n");
        return NULL;
    }
    newnode->data = value;
    newnode->next = NULL;

    return newnode;
}


void insert_begin(struct node **head, int value) {

    struct node *newnode = create_node(value);
    if (newnode == NULL) {
        printf("alloc failure\n");
        return;
    }
    //link older node to new node
    newnode->next = *head;
    //move head to curr node
    *head = newnode;
}


void insert_end(struct node **head, int value) {
    //get temp ptr
    struct node *temp = *head;
    //create node
    struct node *newnode = create_node(value);

    if (newnode == NULL) {
        printf("alloc fail\n");
        return;
    }
    //check for empty list
    if (temp == NULL) {
        *head = newnode;
        return;
    }

    //traverse til end of node
    while (temp->next!= NULL) {
       temp = temp->next;
    }
    //link node
    temp->next = newnode;
}

void delete_node(struct node **head, int key) {
    //we need a ptr to hold next
    struct node *prev = 0, *temp = *head;
    //check for empty list
    if(temp == NULL){
        printf("list is empty\n");
        return;
    }
    //if deletion node is head
    if((temp != NULL) && (temp->data == key)) {
        *head = temp->next;
        free(temp);
        return;
    }
    //if deletion node was in midddle, track for value
    while ((temp != NULL) && (temp->data != key))
    {
        prev = temp;
        //move temp ptr
        temp = temp->next;
    }

    if (temp == NULL)
    {
        printf("value not found\n");
    }
    prev->next = temp->next;
    free(temp);

}

void display_list(struct node **head) {
    struct node *temp = *head;

    if (temp == NULL) {
        printf("empty list\n");
        return;
    }
    while (temp !=  NULL)
    {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}

void free_list(struct node **head) {
    struct node *next,  *temp = *head;
    // //check for empty list
    if (temp == NULL)
    {
        printf("list is empty\n");
        return;
    }

    while (temp != NULL) {
        next = temp->next;
        free(temp);
        temp = next;
    }
    *head = NULL;
}

void find_list_len(struct node **head, int *cnt) {
    struct node *temp = *head;

    // if (temp == NULL) {
    //     *cnt = 0;
    //     return;
    // }

    while (temp !=  NULL) {
        (*cnt)++;
        temp = temp->next;
    }
}

void reverse_list(struct node **head) {
    //ptrs to hold curr, prev, next
    struct node *next, *curr, *prev;
    //point to head, prev as null
    prev = NULL;
    curr = *head;

    while (curr != NULL)
    {
        //save next node
        next = curr->next;
        //reverse the link
        curr->next = prev;
        //move prev ptr
        prev = curr;
        //move to next npode
        curr = next;
    }
    //move head ptr
    *head = prev;

}

int main() {
    struct node *head = NULL;
    int cnt = 0;

    insert_begin(&head, 10);
    insert_begin(&head, 20);
    insert_begin(&head, 30);
    display_list(&head);
    insert_end(&head, 300);
    insert_end(&head, 400);
    display_list(&head);
     find_list_len(&head, &cnt);
     printf("len:%d\n", cnt);
     reverse_list(&head);
     display_list(&head);
     delete_node(&head, 400);
     display_list(&head);
return 0;
}