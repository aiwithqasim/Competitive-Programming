#include <iostream>
typedef int ListType;
using namespace std;

class Node
{
public:
	Node();
	~Node();
	
	 ListType data;
	 Node* next;
	 Node* previous;
};

Node::Node()
{
	next = previous = NULL;
}

Node::~Node()
{
}

class DList
{
public:
	DList();
	~DList();

	//Checks if empty
	bool isEmptyList()
	{
		if (head == NULL)
			return true;
		else
			return false;
	}
	//Inserts at first position
	void insertAtFirst(int  value)
	{
		if (isEmptyList())
		{
			head = createNode(value);
		}
		else
		{
			Node* newNode = createNode(value);

			//put head before newNode
			newNode->next = head;
			head->previous = newNode;

			//makes newNode head
			head = newNode;
			head->previous = NULL;
		}
	}
	//Inserts at Last position
	void insertAtLast(int value)
	{
		if (isEmptyList())
		{
			head = createNode(value);
		}
		else
		{
			Node* newNode = createNode(value);
			
			//traverses through list
			for (Node* tempNode = head; tempNode != NULL; tempNode = tempNode->next)
			{
				//When finds Last one
				if (tempNode->next == NULL)
				{
					Node* newNode = createNode(value);

					tempNode->next = newNode;
					newNode->previous = tempNode;

					break;
				}
			}

		}
	}
	//Inserts at Any position
	void insertAtAny(int oldValue, int newValue)
	{
		if (isEmptyList())
		{
			cout << "List is empty" << endl;
			exit(0);
		}
		else
		{
			for (Node* currentNode = head; currentNode != NULL; currentNode = currentNode->next)
			{	
				//when Finds same value
				if (currentNode->data == oldValue)
				{
					Node* newNode = createNode(newValue);
					
					//Connects newNode to the next and previous one
					newNode->next = currentNode->next;
					newNode->previous = currentNode;

					//connects previous one to the newNode 
					currentNode->next = newNode;
					break;
				}
				else
				{
					cout << oldValue <<" not found" << endl;
					break;
				}
			}
		}
	}
	//Deletes from any position
	void deleteAtAny(int value)
	{
		if (isEmptyList())
		{
			cout << "List is empty..." << endl;
		}
		else
		{
			for (Node* currentNode = head; currentNode != NULL; currentNode = currentNode->next)
			{
				//If first node is to be deleted
				if (head->data == value)
				{
					Node* tempNode = head;
					
					//updates head to next and delete previos value
					head = head->next;
					head->previous = NULL;

					delete tempNode;
					break;
				}//if()
				else if (currentNode->next->data == value)
				{
					if (currentNode->next->next == NULL)
					{
						Node* tempNode = currentNode->next;
						currentNode->next = NULL;

						delete tempNode;
						break;
					}

				}
				else if (currentNode->data == value)
				{
					Node* pre;
					Node* post;

					pre = currentNode->previous;
					post = currentNode->next;
					
					pre->next = post;
					post->previous = pre;

					delete currentNode;
					break;
				}
				else
				{
					cout << value <<" not found!" << endl;
				}
			}
			cout << value << " deleted!" << endl;
		}
	}
	//Traverse and display
	void traverse()
	{
		for (Node* tempNode = head; tempNode != NULL; tempNode = tempNode->next)
		{
			cout << tempNode->data << " ";
		}
		cout << endl;
	}

private:
	Node* head;

	//Creates a new Node
	Node* createNode(int value)
	{
		Node* n = new Node;
		n->data = value;

		return n;
	}
};

DList::DList()
{
	head = NULL;
}

DList::~DList()
{
}

int main()
{
	DList l;

	cout << "Prepending" << endl;
	l.insertAtFirst(1);
	l.insertAtFirst(2);
	l.insertAtFirst(3);
	l.traverse();

	cout << "Appending at last" << endl;
	l.insertAtLast(4);
	l.insertAtLast(5);
	l.traverse();

	cout << "Appending at any position" << endl;
	l.insertAtAny(5, 6);
	l.insertAtAny(1, 0);
	l.traverse();

	cout << "Deletion from different positions" << endl; 
	l.deleteAtAny(3);
	l.deleteAtAny(1);
	l.deleteAtAny(5);
	l.traverse();


	system("pause");
	return 0;
}
