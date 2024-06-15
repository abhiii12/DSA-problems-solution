#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct LinkedList {
    struct Node* head;
    int size;
};

struct LinkedList* create_list() {
    struct LinkedList* list = (struct LinkedList*) malloc(sizeof(struct LinkedList));
    list->head = NULL;
    list->size = 0;
    return list;
}

void insert_at_beginning(struct LinkedList* list, int data) {
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
    new_node->data = data;
    new_node->next = list->head;
    list->head = new_node;
    list->size++;
}

void insert_at_end(struct LinkedList* list, int data) {
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
    new_node->data = data;
    new_node->next = NULL;
    if (list->head == NULL) {
        list->head = new_node;
        list->size++;
        return;
    }
    struct Node* temp = list->head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = new_node;
    list->size++;
}

void insert_at_index(struct LinkedList* list, int data, int index) {
    if (index < 0 || index > list->size) {
        printf("Invalid index\n");
        return;
    }
    if (index == 0) {
        insert_at_beginning(list, data);
        return;
    }
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
    new_node->data = data;
    struct Node* temp = list->head;
    for (int i = 0; i < index - 1; i++) {
        temp = temp->next;
    }
    new_node->next = temp->next;
    temp->next = new_node;
    list->size++;
}

int remove_at_beginning(struct LinkedList* list) {
    if (list->head == NULL) {
        printf("List is empty\n");
        return -1;
    }
    int data = list->head->data;
    struct Node* temp = list->head;
    list->head = list->head->next;
    free(temp);
    list->size--;
    return data;
}

int remove_at_end(struct LinkedList* list) {
    if (list->head == NULL) {
        printf("List is empty\n");
        return -1;
    }
    if (list->head->next == NULL) {
        int data = list->head->data;
        free(list->head);
        list->head = NULL;
        list->size--;
        return data;
    }
   
