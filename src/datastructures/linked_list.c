#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

struct node {
	int data;
	int key;
	struct node *next;
};

struct node *head = NULL;
struct node *curr = NULL;

void printList() {
	struct node *ptr = head;
	printf("\n[ ");
	while(ptr != NULL) {
		printf("(%d, %d) ", ptr->key, ptr->data);
		ptr = ptr->next;
	}

	printf(" ]\n");
}

void insertFirst(int key, int data) {
	// create a link
	struct node *link = (struct node*) malloc(sizeof(struct node));

	// set key and data to be the passed values
	link->key = key;
	link->data = data;

	// rip dude that's an f
	link->next = head;

	// reset head to link
	head = link;
}

struct node* deleteFirst() {
	// create a ref to the first link
	struct node *tempLink = head;

	// next is now head
	head = head->next;

	// return the ref to the old link
	return tempLink;
}

bool isEmpty() {
	return head == NULL;
}

int length() {
	struct node* temp = head;
	int length = 0;
	while (temp != NULL) {
		length++;
		temp = temp->next;
	}
	return length;
}

int main() {
	printf("before: ");
	printList();
	insertFirst(1, 10);
	insertFirst(2, 20);
	insertFirst(3, 80);
	printf("after: ");
	printList();
}

