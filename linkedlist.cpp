#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node *next;
};

struct node *create(){
	int data;
	struct node *p, *n, *r;
	printf("Enter -1 to exit: ");scanf("%d", &data);
	r=NULL; p=NULL;
	while(data!=-1){
		n = (struct node*)malloc(sizeof(struct node));
		n->data = data;
		n->next = NULL;
		 if(r==NULL)
		 	r=n;
		 else
		 	p->next = n;
		 p=n;
		 printf("\nEnter -1 to exit: ");scanf("%d", &data);
	}
	return(r);
}
void show(struct node *node){
	while(node!=NULL){
		printf("%d\n", node->data);
		node = node->next;
	}
}

int main(){
	struct node *r;
	r = create();
	show(r);
	getch();
	return 0;
}
