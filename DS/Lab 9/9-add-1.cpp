#include <iostream>
using namespace std;

struct node
{
	int data;
	int exp;
	node *next;
	node *prev;
	node();
	node(int, int);
	void insert(node*);
	void traverse(node*);
};

node *a = NULL;
node *b = NULL;
node *prod = NULL;

void multiply();
void insert_sorted(node*);

int main()
{
	node *curr = NULL;
	int n;
	cout << "How many terms in first polynomial?\n";
	cin >> n;
	while(n--)
	{
		if(a)
		{
			curr->insert(a);
			curr = curr->next;
		}
		else
		{
			int x,y;
			cin >> x >> y;
			a = curr = new node(x,y);
			a->next = a;
		}
	}
	a->traverse(a);
	cout << "How many terms in second polynomial?\n";
	cin >> n;
	while(n--)
	{
		if(b)
		{
			curr->insert(b);
			curr = curr->next;
		}
		else
		{
			int x, y;
			cin >> x >> y;
			b = curr = new node(x, y);
			b->next = b;
		}
	}
	b->traverse(b);
	multiply();
	cout << "\nProduct is\n";
	prod->traverse(prod);
	return 0;
}

node::node()
{
	data = exp = 0;
	next = prev = NULL;
}

node::node(int x, int y)
{
	data = x;
	exp = y;
	next = prev = NULL;
}

void node::insert(node *head)
{
	int x, y;
	cin >> x >> y;
	node *temp = new node(x,y);
	temp->next = head;
	temp->prev = this;
	this->next = temp;
	head->prev = temp;
}

void node::traverse(node *head)
{
	if(next == head)
	{
		cout << data << "x^" << exp << endl;
		return;
	}

	cout << data << "x^" << exp << " + " ;
	next->traverse(head);
}

void multiply()
{
	node *i = a;
	node *j = b;

	//initially we make both lists linear

	for(; i->next != a; i = i->next);
    i->next = a->prev = NULL;
    i = b;
    for(;i->next != b; i = i->next);
    i->next = b->prev = NULL;

	//now we multiply each term

	for(i = a; i; i = i->next)
		for(j = b; j; j = j->next)
            insert_sorted(new node(i->data *j->data, i->exp + j->exp));

	//now we make both lists circular again

	i = a;
	for(; i->next; i = i->next);
    i->next = a;
    a->prev = i;
    i = b;
    for(;i->next; i = i->next);
    i->next = b;
    b->prev = i;
}

void insert_sorted(node *temp)
{
	if(!prod)
	{
		prod = temp;
		prod->next = prod->prev = temp;
		return;
	}

	if(prod->exp < temp->exp)
	{
		temp->next = prod;
		temp->prev = prod->prev;
		prod->prev->next = temp;
		prod->prev = temp;
		prod = temp;
		return;
	}

	node *i = prod;
	for(;i->next != prod;i = i->next)
	{
	    if(i->exp == temp->exp)
		{
			i->data += temp->data;
			return;
		}

		if(i->exp < temp->exp)
		{
			temp->next = i;
			temp->prev = i->prev;
			i->prev->next = temp;
			i->prev = temp;
		}
	}

	if(i->exp == temp->exp)
    {
        i->data += temp->data;
        return;
    }

    if(i->exp < temp->exp)
    {
        temp->next = i;
        temp->prev = i->prev;
		i->prev->next = temp;
		i->prev = temp;
		return;
    }

	//reached here implies add at end of list

	temp->next = prod;
	temp->prev = i;
	i->next = temp;
	prod->prev = temp;
}
