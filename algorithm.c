#include<stdio.h>
#include<stdlib.h>

struct node{
    int id,x,y;
    struct node *next;
};
struct node *head = NULL;

void createLinkedList(struct node **firstPtr,int id,int x,int y){
	struct node* new_node = (struct node*) malloc(sizeof(struct node));
	struct node *last = *firstPtr;  
		new_node->id  = id;
		new_node->x  = x;
		new_node->y  = y;
		new_node->next = NULL;
			if (*firstPtr == NULL){
				*firstPtr = new_node;
				return;
			}
		while (last->next != NULL)
			last = last->next;

	last->next = new_node;
	return;
}

void printLinkedList(struct node *firstPtr){
	struct node *current = firstPtr;
		while(current != NULL){
			printf("%d %d %d\n", current->id, current->x, current->y);
			current=current->next;
		}
}
	
void readFileCreatLinkedList(){
	FILE *file = fopen("/home/rabus/input.txt", "r");
	int c,x,y, id;
		do {
			c = fscanf(file,"%d%d%d",&id,&x,&y);
			if (c != EOF)
			//printf("%d %d %d\n", id, x, y);
			createLinkedList(&head,id,x,y);
		} while (c != EOF);
	fclose(file);
}

int main(void){
	
	readFileCreatLinkedList();
	printLinkedList(head);
	
    return 0;
}
