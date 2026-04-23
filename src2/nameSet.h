/**@file nameSet.h
 * @author Samuel Okwuegbuna
 * 
 * 
 */
#ifndef NAME_SET_H_
#define NAME_SET_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

typedef struct node {
    int data;
    struct node *next, *prev;
}NODE;

//to make a new node
NODE* create_node(int data);

//to add node at the front of the list
void insert_front(NODE **head, int data);

//to add node at the back of the list
void insert_back(NODE **head, int data);

void delete_node(NODE **head, int data);

//to print the list
void print_list(NODE *head);

//to empty the list
void empty_list(NODE **head);

 #endif