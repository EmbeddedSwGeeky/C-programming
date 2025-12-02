/**
 * @file singly_linked_list.c
 * @author your name (you@domain.com)
 * @brief: operations on singly linkedlist
 * @version 0.1
 * @date 2025-09-06
 * @copyright Copyright (c) 2025
 */

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

/**
 * @brief THis gandles accepts data, try to create a node of that struct and returns pointer of struct node type
 * @param data
 * @return struct node*
 */

struct node* create_node(int data) {

    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    if (newnode == NULL)
    {
        printf("failed to allocate memory for the node\n");
        return NULL;
    }

    newnode->data = data;
    newnode->next = NULL;

    return newnode;
}
/**
 * @brief: Insert node at start of the list
 * 1] To insert first create a node and check for allocation failures, if yes return
 * 2] assign next ptr with head ptr
 * 3]move head ptr to current node
 * @param head 
 * @param data 
 */
void insert_begin(struct node **head, int data) {

    struct node *newnode = create_node(data);
    if (newnode == NULL)
    {
        printf("Failed to allocate memory\n");
        return;
    }

    newnode->next = *head;
    *head = newnode;
}

/**
 * @brief:
 * 1]To insert first create a node and check for allocation failures, if yes return
 * 2]if head points to null, i.e. no new node and the created once may be the first one. So, point head with newnode
 * 3]if not new link, so will go till where the node has null
 * @param head 
 * @param value 
 */

void insert_end(struct node **head, int value) {


    struct node *newnode = create_node(value);

    if (newnode == NULL)
    {
        printf("Failed to allocate memory\n");
        return;
    }

    if (*head == NULL)
    {
        /**empty list */
        *head = newnode;
        return;
    }

    struct node *temp = *head;

/**if we use while(temp != NULL) then you will be at the null ptr, so will go till where the node has null */

    while (temp->next != NULL) {
        temp = temp->next;
    }
    /**after figuring out the node it has null, attach our new node */
    temp->next = newnode;
}

void delete_node(struct node **head, int key) {
    struct node *prev = 0, *temp = *head;

    /**when list is empty */
    if(temp == NULL) {
        printf("Empty list\n");
        return;
    }

    /**To delete when head node */
    if ((temp != NULL) && ((temp->data) == key)) {
        *head= temp-> next;
        free(temp);
        return;
    }

    /**To delete somewhere in middle */
    while ((temp != NULL) && (temp->data != key)) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL){
        printf("Value %d not found.\n", key);
        return;
    }

    prev->next = temp->next;
    free(temp);

}

void display_list(struct node **head) {
    struct node *temp = *head;

    if (temp == NULL)
    {
        printf("List is empty\n");
        return;
    }

    printf("display list\n");

    /**we will miss last node if we keep temp->next as null, that's why we are putting temp != NULL */

    while (temp != NULL) {
        printf("%d\n", temp->data);
        temp = temp ->next;
    }
}

void find_length_of_list(struct node **head, int *cnt) {
    struct node *temp = *head;

    while (temp != NULL)
    {
        /**carefull with ptr precidence */
        (*cnt)++;
        temp = temp ->next;
    }
}

void free_list(struct node **head) {
    struct node *temp = *head;
    struct node *next = 0;

    while (temp != NULL) {
        next = temp->next;
        free(temp);
        temp = next;
    }
    *head = NULL;
}

void reverse_list(struct node **head) {
    struct node *prev, *curr, *next;
    curr = *head;

    prev = NULL;

    while (curr != NULL) {
        //save the next node
        next = curr->next;
        //reverse the  current link node
        curr->next = prev;
        //move prev pointer  to forward
        prev = curr;
        //move curr pointer to next
        curr = next;
    }
    *head = prev;
}

int main() {
    struct node *head = NULL;

    int cnt = 0;


    display_list(&head);

    find_length_of_list(&head, &cnt);

    printf("length of list:%d\n", cnt);

    /** try to delete empty list */
    delete_node(&head, 0);

    insert_begin(&head, 10);

    insert_begin(&head, 20);
    insert_begin(&head, 30);
    insert_begin(&head, 40);

    /** try to delete head node by value */
    delete_node(&head, 40);

    display_list(&head);

    insert_end(&head, 100);
    insert_end(&head, 200);
    insert_end(&head, 300);
    insert_end(&head, 400);
    display_list(&head);

    /** try to delete  node by value in midddle of list */
    delete_node(&head, 200);
    display_list(&head);

    find_length_of_list(&head, &cnt);
    printf("length of list:%d\n", cnt);
   // free_list(&head);
    display_list(&head);
    reverse_list(&head);
    display_list(&head);

}