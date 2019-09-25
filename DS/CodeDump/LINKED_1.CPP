#include<iostream.h>
#include<conio.h>
//using namespace std;

class Node{
public:
	int value;
	Node* next;
};

class list{
	Node* head;
public:
	list(){ head = NULL; }
	void createlist();
	void eraselist();
	void disp();
	void insert_front(int);
	void insert_end(int);
	void delete_node(int);
	void reverse_list();
	void delalt();
	void insertSORT(int);
	void sort();
};

void list::createlist(){

	Node *temp; Node *prev = new Node;
	int v;
	do{
		cout << "Enter value or next value: ";
		cin >> v;
		if (v == -1)
			break;

		temp = new Node;		
		temp->value = v;   //temp intialisation
		temp->next = NULL;

		if (head == NULL){
			head = temp;		//if no head present
			prev = temp; 
		}
		else{
			prev->next = temp;
			prev = temp;		//entering next values (nodes)
		}
	} while (v != -1);

}

void list::disp(){
	cout << "Displaying list: " << endl;
	Node * temp;
	if (head == NULL){
		cout << "Empty..";
		return;
	}
	else {
		temp = head;
		do{
			cout << temp->value << " ";
			temp = temp->next;
		} while (temp != NULL);
	}
	cout << endl;
}

void list:: eraselist(){
	Node *temp;
	temp = head;
	while (head != NULL){
		temp = temp->next;
		delete head;
		head = temp;
	}
}


void list::insert_front(int v){
	cout << "Adding at the front.." << endl;
	if (head == NULL){
		Node *head = new Node;
		head->value = v;
		head->next = NULL;
	}
	else
	{
		Node* temp1 = new Node;
		temp1->next = head;
		temp1->value = v;
		head = temp1;
	}
}

void list::insert_end(int v){
	cout << "Adding at the end.."<<endl;
	if (head == NULL){
		Node *head = new Node;
		head->value = v;
		head->next = NULL;
	}
	else
	{
		Node *temp = new Node;
		temp = head;
		while (temp->next != NULL){
			temp = temp->next;
		}
		Node *temp1 = new Node;
		temp->next = temp1;
		temp1->value = v;
		temp1->next = NULL;
	}
}

void list::delete_node(int v){
	cout << "Deleting node.."<<endl ;
	Node *temp = new Node;
	Node *prev = new Node;
	if (head == NULL){
		Node *head = new Node;
		head->value = v;
		head->next = NULL;
	}
	else{
		temp = head;
		while (temp->value != v){
			prev = temp;
			temp = temp->next;
		}
		prev->next = temp->next;
		delete temp;
	}
}

void list :: reverse_list(){
	cout << "Reversing list..."<<endl;
	Node *curr = new Node;
	Node *prev = NULL; Node *nxt=new Node;
	curr = head;
	while (curr != NULL){
		nxt = curr->next;
		curr->next = prev;
		prev = curr;
		curr = nxt;
	}
	head = prev;
}

void list:: sort(){
	cout << "Sorting.. " << endl;
	Node *i = new Node;
	Node *j = new Node;
	for (i = head; i != NULL; i = i->next){
		for (j = head; j != NULL; j = j->next){
			if (i->value < j->value){
				int t = j->value;
				j->value = i->value;
				i->value = t;
			}
		}
	}
}

void list:: delalt(){
	cout << "Deleting alternate nodes.." << endl;
	if (head == NULL){ cout << "Empty list error. "; return; }
	Node* prev = head;
	Node* curr = head->next;
	while (prev != NULL && curr != NULL){
		prev->next = curr->next;
		delete curr;
		prev = prev->next;
		if (prev != NULL) curr = prev->next;
	}
}

void list:: insertSORT(int v){
	cout << "Inserting into sorted array.. " << endl;
	Node* temp = new Node;
	temp->value = v;
	temp->next = NULL;
	Node* ptr = new Node;
	ptr = head;
	Node* prev = NULL;
	while (ptr!= NULL && ptr->value <= v){
		prev = ptr;
		ptr = ptr->next;
	}
	if (prev == NULL){
		temp->next = head;
		head = temp;
		return;
	}
	temp->next = prev->next;
	prev->next = temp;
}

void main(){
	clrscr();
	list l1;
	l1.createlist();	
	l1.disp();
	l1.insert_front(2);
	l1.disp();
	l1.insert_end(3);
	l1.disp();
	l1.delete_node(4);
	l1.disp();
	l1.reverse_list();
	l1.disp();
	l1.sort();
	l1.disp();
	l1.delalt();
	l1.disp();
	l1.insertSORT(10);
	l1.disp();
	getch();
}