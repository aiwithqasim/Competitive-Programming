#include<iostream>
using namespace std;

struct Node
{
	char data;
	Node *left,*right;	
};

Node *Insert(Node *root,char data)
{
	if(root==NULL){
		root=new Node();
		root->data=data;
		root->left=root->right=NULL;
	}
	else if(data<=root->data){
		root->left=Insert(root->left,data);
	}
	else{
		root->right=Insert(root->right,data);
	}
	return root;
}

void searchData(Node *root,char n)
{
	if(n==root->data){
		cout<<"Element found!"<<endl;
	}
	else if(n<root->data){
		searchData(root->left,n);
	}
	else {
		searchData(root->right,n);
	}

}
int main()
{
	Node *root=NULL;
	root=Insert(root,'Q');
	root=Insert(root,'A');
	root=Insert(root,'S');
	root=Insert(root,'I');
	root=Insert(root,'M');
	root=Insert(root,'H');
	root=Insert(root,'A');
	root=Insert(root,'S');
	root=Insert(root,'S');
	root=Insert(root,'A');
	root=Insert(root,'N');
	char letter;
	cout<<"Enter character to search: ";
	cin>>letter;
	searchData(root,letter);
}
