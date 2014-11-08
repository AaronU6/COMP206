#include <stdlib.h>
#include <stdio.h>

typedef struct Node {
	int value;
	struct Node* next;
} st_node;

st_node* addNode (st_node* cur_node, int value){
	st_node* empty;
	st_node* newNode;

	empty = cur_node;
	while (empty->next != NULL){
		empty = empty->next;
	}

	newNode = (st_node*)malloc(sizeof(st_node));
	newNode->value = value;
	newNode->next = NULL;
	empty->next = newNode;

	return cur_node;
}

void printNode (st_node* cur_node){
	st_node* node = cur_node;
	do{
		printf("%d ", node->value);
		node = node->next;
	}while(node->next != NULL);
	printf("%d ", node->value);
	//Comment
}

int main(void){
	st_node* head;
	head = (st_node*) malloc(sizeof(st_node));
	head->value = 0;
	head->next = NULL;
	
	int i = 0;
	
	printf("Enter a value from 0 to 9: ");
	scanf("%d", &i);

	for (int j = 0; j < i; j++){
		addNode(head, (j+1));			
	}

	printNode(head);
}
