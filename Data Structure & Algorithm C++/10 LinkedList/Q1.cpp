#include <iostream>
using namespace std;

class Node
{
public:
	Node();
	~Node();

	int data;
	Node* next;

};

Node::Node()
{
	next = NULL;
}

Node::~Node()
{
}
class List
{
public:
	List();
	~List();
	//Checks if list is empty
	bool isEmpty()
	{
		if (head == NULL)
			return true;
		else
			return false;
	}
	//Insert at First index
	void insertFirst(int value)
	{
		if (isEmpty())
		{
			head = createNode(value);
		}
		else
		{
			Node* newNode = createNode(value);

			newNode->next = head;
			head = newNode;
		}
	}
	//Insert at Last index
	void insertLast(int value)
	{
		if (isEmpty())
		{
			head = createNode(value);
		}
		else
		{
			Node* tempNode = head;

			while (tempNode != NULL)
			{
				if (tempNode->next->next == NULL)
				{
					Node* newNode = createNode(value);

					tempNode->next->next = newNode;
					newNode->next = NULL;
					break;
				}

				tempNode = tempNode->next;
			}
		}
	}
	//Insert at any index
	void insertAny(int oldValue, int newValue)
	{
		if (isEmpty())
		{
			head = createNode(newValue);
		}
		else
		{
			for (Node* tempNode = head; tempNode != NULL; tempNode = tempNode->next)
			{
				if (tempNode->data == oldValue)
				{
					Node* newNode = createNode(newValue);

					newNode->next = tempNode->next;
					tempNode->next = newNode;
				}
			}
		}
	}

	//Display
	void display()
	{
		if (!isEmpty())
		{
			Node* tempNode = head;

			while (tempNode != NULL)
			{
				cout << tempNode->data << " ";
				tempNode = tempNode->next;
			}
			cout << endl;
		}
		else
		{
			cout << "List is Empty..." << endl;
		}
	}
	private:
	Node* head;
	//Creates a new node
	Node* createNode(int value)
	{
		Node* n = new Node;
		n->data = value;
		return n;
	}
};
	List::List()
{
	head = NULL;
}

List::~List()
{
	//deletes every node upon completion
	while (head != NULL)
	{
		Node* temp = head;
		head = head->next;

		delete temp;
	}
}
int main()
{
	List l;
	cout<<"==============================================="<<endl;
	cout << "Added at first" << endl;
	l.insertFirst(3);
	l.insertFirst(2);
	l.insertFirst(1);
	l.display();

	cout<<"==============================================="<<endl;
	cout << "Added at last" << endl;
	l.insertLast(4);
	l.display();

	cout<<"==============================================="<<endl;
	cout << "Added at any" << endl;
	l.insertAny(4, 5);
	l.display();
	system("pause");
	return 0;
}
