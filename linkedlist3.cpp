#include <stdio.h>
#include <conio.h>

struct node{
	int data;
	struct node *next;
};

void display(a){
	node *temp1 = a;
	while(temp1->link!=NULL){
		temp1 = temp1->link;
		printf("%d\n",a->data);
	}
	temp1->link = temp;
}
//pointer to head node
struct node *head;

void insert(int x){
	//create a node using malloc; dynamically allocated memory
	node *temp = (node *)malloc(sizeof(struct node));
	temp->data = x;
	temp->next = head ;
	head = temp;
}
void print(){
	struct node *temp = head;
	printf("List is: ");
	while(temp!=NULL){
		printf("%d\n", temp->data);
		temp=temp->next;
	}
}
int main(){
	//when list is empty pointer should point nowhere but to NULL so
	head = NULL; //empty list
	int n,x;
	printf("How many numbers: ");scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("Enter the number \n");scanf("%d",&x);
		insert(x);
		print();
	}
	getch();
	return 0;
}