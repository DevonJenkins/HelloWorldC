#include <stdio.h>
#include <stdlib.h>

struct Node {
	char* string;
	struct Node* next;
};

void printList(struct Node* n)
{
	while (n != NULL){
		printf(" %s", n->string);
		n = n->next;
	}
}

int main()
{
	struct Node* head = NULL;
	struct Node* second = NULL;
	struct Node* third = NULL;
	struct Node* fourth = NULL;

	head = (struct Node*)malloc(sizeof(struct Node));
	second = (struct Node*)malloc(sizeof(struct Node));
	third = (struct Node*)malloc(sizeof(struct Node));
	fourth = (struct Node*)malloc(sizeof(struct Node));

	head->string = "Hi";
	head->next = second;
	
	second->string = "Hello!";
	second->next = third;

	third->string = "howdy!!";
	third->next = fourth;

	fourth->string = "hoody doody!!";
	fourth->next = NULL;

	printList(head);
	printf("\n");

	return 0;
};
