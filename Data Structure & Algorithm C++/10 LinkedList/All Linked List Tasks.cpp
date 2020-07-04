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
	//delete node from any index
	void deleteAnyNode(int value)
	{
		if (isEmpty())
		{
			cout << "List is empty..." << endl;
			exit(0);
		}
		else
		{
			for (Node* currentNode = head; currentNode != NULL; currentNode = currentNode->next)
			{
				if (head->data == value)//if node is first one
				{
					head = head->next;

					delete currentNode;
					break;
				}
				else if (currentNode->next->next == NULL) //if node is the last One
				{
					Node* post;
					post = currentNode->next;
					currentNode->next = NULL;

					delete post;
					break;
				}
				else if (currentNode->next->data == value) //if node is at any position
				{
					Node* pre, *post;
					pre = currentNode;
					post = currentNode->next->next;

					pre->next = post;

					break;
				}

			}//end of for loop
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
	
	//Stack implementation using Linked List
	//Checks if stack isEmpty
	bool stackIsEmpty()
	{
		if (head == NULL)
			return true;
		else
			return false;
	}
	//Pushes value at top of stack
	void push(int value)
	{
		if (stackIsEmpty())
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
	//Pops a value from top of stack
	void pop()
	{
		if (stackIsEmpty())
		{
			cout << "Stack is Empty..." << endl;
		}
		else
		{
			Node* tempNode = head;

			head = head->next;

			delete tempNode;
		}
	}
	//Returns the topmost value
	int returnTop()
	{
		return head->data;
	}

	//Single Ended Queue Implementation using Linked List
	//Checks if queue isEmpty
	bool queueisEmpty()
	{
		if (head == NULL)
			return true;
		else
			return false;
	}
	//Enqueue a node to the queue
	void Enqueue(int value)
	{
		if (queueisEmpty())
		{
			head = createNode(value);
		}
		else
		{
			Node* newNode = createNode(value);
			for (Node* currentNode = head; currentNode != NULL; currentNode = currentNode->next)
			{
				if (currentNode->next == NULL)
				{
					currentNode->next = newNode;
					break;
				}
			}
		}
	}
	//Dequeue a node
	void Dequeue()
	{
		if (queueisEmpty())
		{
			cout << "Queue is Empty" << endl;
		}
		else
		{
			Node* tempNode = head;

			head = head->next;

			delete tempNode;
		}
	}

	//Implementation for swapping
	//Finds the node and return its address
	Node* findAndReturn(int value)
	{
		for (Node* currentNode = head; currentNode != NULL; currentNode = currentNode->next)
		{
			if (currentNode->data == value)
				return currentNode;
		}
	}
	//Swapping two Node values
	void swapNodeValues(int nodeOneValue, int nodeTwoValue)
	{
		for (Node* currentNode = head; currentNode != NULL; currentNode = currentNode->next)
		{
			if (currentNode->data == nodeOneValue)
			{
				currentNode->data = nodeTwoValue;
			}
			else if(currentNode->data == nodeTwoValue)
			{
				currentNode->data = nodeOneValue;
			}
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
	cout << "Added at first" << endl;
	l.insertFirst(3);
	l.insertFirst(2);
	l.insertFirst(1);
	l.display();

	cout << "Added at last" << endl;
	l.insertLast(4);
	l.display();

	cout << "Added at any" << endl;
	l.insertAny(4, 5);
	l.display();

	cout << "deleted at first" << endl;
	l.deleteAnyNode(1);
	l.display();

	cout << "deleted at last" << endl;
	l.deleteAnyNode(5);
	l.display();

	cout << "deleted at any" << endl;
	l.deleteAnyNode(3);
	l.display();
	
	cout << "After pushing" << endl;
	l.push(1);
	l.push(2);
	l.push(3);
	l.push(4);
	cout << "Value at top: " << l.returnTop() << endl;
	l.display();

	cout << endl << "After poping" << endl;
	l.pop();
	l.display();
	cout << "Value at top: " << l.returnTop() << endl;

	cout << "After Enqueue" << endl;
	l.Enqueue(1);
	l.Enqueue(1);
	l.Enqueue(3);
	l.Enqueue(1);
	l.Enqueue(2);
	l.Enqueue(4);
	l.Enqueue(1);
	l.display();

	cout << "After Normal Dequeue" << endl;
	l.Dequeue();
	l.display();

	cout << "After ascendingDequeue" << endl;
	l.ascendingDequeue();
	l.display();

	cout << "After one more ascendingDequeue" << endl;
	l.ascendingDequeue();
	l.display();

	cout << "After descendingDequeue" << endl;
	l.descendingDequeue();
	l.display();

	cout << "After one more descendingDequeue" << endl;
	l.descendingDequeue();
	l.display();

	l.insertFirst(3);
	l.insertFirst(2);
	l.insertFirst(1);
	l.display();

	cout << "After Swapping two Nodes" << endl;
	l.swapNodeValues(1, 2);
	l.display();

	system("pause");
	return 0;
}
