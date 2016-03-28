/*
OVERVIEW: Given a single linked list, remove every Kth node in the linked list.
E.g.: 1->2->3->4->5 and K 2, output is 1->3->5.

INPUTS: A linked list and Value of K.

OUTPUT: Remove every Kth node in the linked list.

ERROR CASES: Return NULL for error cases.

NOTES:
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};

struct node * removeEveryKthNode(struct node *head, int K) {
	//int count = 0;
	if (head == NULL || K <= 0 || K == 1)
		return NULL;
	struct node *ptr1, *ptr2;
	ptr1 = head;
	while (ptr1->next != NULL){
		ptr2 = ptr1;
		ptr1 = ptr1->next;
		if ((ptr1->num % K)==0){
			ptr2->next = ptr1->next;
		}
		
	}
	return head;
}