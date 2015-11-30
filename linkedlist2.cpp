#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node *next;
};

void show(struct node *node){
	while(node!=NULL){
		printf("%d\n", node->data);
		node = node->next;
	}
}

struct node *create(){
	struct node *p,*r, *n;
	int s,data;
	p=NULL;r=NULL;
	printf("Press -1 to exit");scanf("%d", &data);
	while(data!=-1){
		n = (struct node*)malloc(sizeof(struct node));
		n->data = data;
		n->next = NULL;
		
		if(r==NULL)
			r=n;
		else
			p->next = n;

		p = n;
		printf("\nEnter the element -1 to exit: ");scanf("%d", &data);
	}
	return(r);
}

int main(){	
	struct node *r;
	r = create();
	show(r);
	getch();
	return 0;
}
