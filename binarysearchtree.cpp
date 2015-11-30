#include <stdio.h>
#include <conio.h>
using namespace std;
struct bstnode{
	int data;
	bstnode* left;
	bstnode* right;
};
void display(bstnode* root){
	while(root!=NULL){
        printf("%d\n",root->data);
        bstnode* node = node->
    }
}

bstnode* getnewnode(int data){
	bstnode* newnode = new bstnode();
	newnode->data = data;
	newnode->left = newnode->right = NULL;
	return newnode;
}

bstnode* insert(bstnode* root, int data){
	if(root==NULL){
		root = getnewnode(data);
	else if(data <= root->data)
		root->left = insert(root->left, data);
	else root->right = insert(root->right, data);
	return root;
}

bool search(bstnode* root, int data){
	if(root==NULL) return false;
	else if(root->data == data) return true;
	else if(data <= root->data) return search(root->left, data);
	else return search(root->right, data);
}

int main(){
    bstnode* root = NULL;
    int data=0;
    while(data!=-1){
		printf("Enter element else enter -1 to stop:");scanf("%d", &data);
		root = insert(root,data);
	}
	int num;
	printf("Enter number to be searched: ");scanf("%d",&num);
	if(search(root,num) == true) printf("\nElement Found!");
	else printf("\nNot Found!");
	display(root);
    getch();
	return 0;
}

/*
void insert(bstnode** root, int data){
	if (*root==NULL){
		*root = getnewnode(data);
	}
}
*/
