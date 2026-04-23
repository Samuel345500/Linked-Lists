/**@file nameSet.h
 * @author Samuel Okwuegbuna
 * 
 * 
 */
#ifndef NAME_SET_H_
#include "nameSet.h"


NODE* create_node(int data) {
    NODE *new_node = (NODE*)malloc(sizeof(NODE));
    if (new_node != NULL){
        new_node->data = data;
        new_node->next = NULL;
    }

    return new_node;
}

void insert_front(NODE **head, int data) {
    NODE *new_node = create_node(data);
    if(new_node == NULL) return; // Memory allocation failed
    new_node->next = *head;
    *head = new_node;

}

void insert_back(NODE **head, int data){
    NODE* new_node = create_node(data);
    if (new_node == NULL) return; // Memory allocation failed
    if (*head == NULL){
        *head = new_node;
        return;
    }
    NODE *current = *head;
    if (current->next != NULL){
        current = current->next;
    } else{
        current->next = new_node;
    }
}

void delete_node(NODE **head, int data){
    if (*head == NULL) return; // list is empty
    NODE *curr = *head;

    if (curr->data == data){
        curr = curr->next;
        free(*head);
        *head = curr;
    }
}

void print_list(NODE *head){
    NODE *curr = head;
    while(curr != NULL){
        printf("%d -> ", curr->data);
        curr = curr->next;
    }
}

void empty_list(NODE **head){
    if (*head == NULL) return; // list is already empty
    while(*head != NULL){

        NODE *temp = *head;
        *head = (*head)->next;
        free(temp); 
    }
}

#endif /* NAME_SET_H_ */
