// Nicole, 23T3 Week 8
// Tutorial demo code for creating a linked list node

#include <stdio.h>
#include <stdlib.h>

#define SIZE 6

struct node {
    int data;
    struct node *next;
};

// Write function prototype here

int main(void) {

    struct node *head = create_new_node(0);
    struct node *current = head;

    for (int i = 1; i < SIZE; i++) {
        current->next = create_new_node(i);
        current = current->next;
    }

    return 0;
}

// Write a funtion that takes in an int value, and 
// create a linked list node containing that value,
// then returns a pointer to that node 
struct node *create_new_node(int value) {
    struct node *new_node = malloc(sizeof(struct node));
    new_node->data = value;
    new_node->next = NULL;

    return new_node;
}