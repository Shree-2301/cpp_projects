// task : create singly linked list
// language : c++
#include <iostream>
using namespace std;


class Node {
	
public:
	int data;
	Node* next;
};

class linkedList {

public:
	Node* head, *temp; 
	linkedList() {
	   head = NULL;
	}
	void addNode(int value) {
		
		
		Node* newNode = new Node();
		newNode->data = value;
		newNode->next = NULL;

		if(head == NULL) {
			
			head = newNode;
			temp = newNode;
		}
		else {

			temp->next = newNode;
			temp = newNode;
		}

	}
	void displayList() {

		Node* ptr = head;

		while(ptr != NULL) {

			cout << ptr->data << " ";
			ptr = ptr->next;
		}

	}
};

int main() {

	linkedList  List;
	int size;
	cout << "enter size of list: ";
	cin >> size;
	int data;
	while(size--) {
		cout << "enter data: ";	
		cin >> data;
		List.addNode(data);
	}
	List.displayList();

return 0;
}
