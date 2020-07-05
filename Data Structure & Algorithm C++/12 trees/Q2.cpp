#include<iostream>
using namespace std;

struct Node
{
	char data;
	struct Node *left;
	struct Node *right;
};

Node* Insert(Node *root, char data) 
{
	if (root == NULL) {
		root = new Node();
		root->data = data;
		root->left = root->right = NULL;}
	else if (data <= root->data)
		root->left = Insert(root->left, data);
	else
		root->right = Insert(root->right, data);
	return root;}
	
void Preorder(struct Node *root) 
{
	if (root == NULL) return;
	cout<<root->data<<" ";
	Preorder(root->left);  
	Preorder(root->right); 
}



void Postorder(Node *root)
{
	if (root == NULL) return;
	Postorder(root->left);  
	Postorder(root->right);  
    cout<<root->data<<" "; 
}

int main()
{
Node* root = NULL;
	root = Insert(root, '12'); 
	root = Insert(root, '10');
	root = Insert(root, '1');
	root = Insert(root, '14');
	root = Insert(root, '6');
	root = Insert(root, '5');
	root = Insert(root, '8');
	root = Insert(root, '15');
	root = Insert(root, '3');
	root = Insert(root, '9');
	root = Insert(root, '7');
	root = Insert(root, '4');
	root = Insert(root, '11');
	root = Insert(root, '12');
	root = Insert(root, '2');
	cout << "Preorder: ";
	Preorder(root);
	cout << "\n";
	cout << "Postorder: ";
	Postorder(root);
	cout << "\n";
	system("pause");
}


