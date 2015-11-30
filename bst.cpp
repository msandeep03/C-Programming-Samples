#include <stdio.h>
#include <conio.h>
struct bstnode{
	int data;
	bstnode* left;
	bstnode* right;
};

bstnode* getnewnode(data){
	bstnode* newnode = new bstnode();
	newnode->data = data;
	newnode->left = newnode->right = NULL;
	return newnode;
}

bstnode* insert (bstnode* root, int data){
	if(root == NULL) root = getnewnode(data);
	else if(data <= root->data) insert(root->left,data);
	else insert(root->right,data);
}

bool searchnum(bstnode* root, int num){
	if(root->data == num) retrun true;
	else if (num <= root->data) return searchnum(root->left,num);
	else if (num>= root->data) return searchnum(root->right,num); 
	else return false;
}

int main(){
	bstnode* root = NULL;
	int data=0;
	while(data!=-1){
		printf("\nEnter data or else press -1 to EXIT: ");scanf("%d",&data);
		root = insert(root,data);
	}
	int num; printf("\nEnter number to be searched: ");scanf("%d",&num);
	searchnum(root,num);
	getch();
	return 0;
}