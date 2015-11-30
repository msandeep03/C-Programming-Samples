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
	p = NULL; r = NULL;
	printf("Enter -1 to exit: ");scanf("%d",&data);
	while(data!=-1){
		n=(struct node*)malloc(sizeof(struct node));
		n->data=data; n->next=NULL;
		if(r==NULL)
			r=n;
		else p->next=n;
		p=n;
		printf("Enter -1 to exit: ");scanf("%d",&data);		
	}
	return(r);
}

void show(struct node *n){
	while(n!=NULL){
		printf("%d\n",n->data);
		n=n->next;
	}
}

int main(){
	struct node *r;
	r=create();
	show(r);
	getch();
	return 0;
}
