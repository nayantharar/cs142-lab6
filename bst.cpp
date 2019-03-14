#include<iostream>
using namespace std;

class node(){
	public:
	int data;
	node*left;
	node*right;
	
	node(int value){
		data=value;
		left=NULL;
		right=NULL;
	}
};

class BST(){
	public:
	node*root;
	BST(){
		root=NULL;
	}




void inserthelper(int value)
     insert(root,value);
     
void insert(node*curr,int value){
	//if the root is null,then create a node and make it root
	if(root==NULL)
	root=new node(value);
	
	//else decide to move to left or right
	else if(value<curr->data){

	
	//if left is already null,insert there and link it
	if(curr->left==NULL)
	curr->left=new node(value);
	//if its not null,move left and call insert
	else insert(curr->left=value)
}
	
	
	else{
		if(curr->right==NULL) curr->right=new node(value)
		else insert(curr->right=value);
	}
	
}

void displayhelper(){
	displat(root);
}


void display(node*curr){
	//for empty tree
	if(curr==NULL) return;
	//in order
	//print left
	display(curr->left);
	//print myself
	cout<<curr->data<<",";
	//print right
	display(curr->right);
}

node*searchhelper(int value){
	return search(root,value);
}

node*search(node*curr,int value){
	//if its the required value,return curr
	if(curr==NULL||curr->data==value) return curr;
	//if its not,then move right or left
	else if(value<curr->data) return search(curr->left,value);
	else search(curr->right,value)
	
}


int main(){
	BST bst1;
	bst1.inserthelper(12);
	bst1.inserthelper(3);
	bst1.inserthelper(5);
	bst1.inserthelper(14);
	bst1.displayhelper();
	if(bst1.searchhelper(5)!=NULL){

	cout<<endl<<bst1.searchhelper(5)->data<<endl;
}
	return 0;
}












