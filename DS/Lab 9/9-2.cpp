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
node *sum = NULL;

void add();

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

	add();
	cout << "\nSum is\n";
	sum->traverse(sum);
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

void add()
{
	node *curr = NULL;
	node *curr_a = a;
	node *curr_b = b;

	//initially we make both lists non circular
	node *i = a;
	for(; i->next != a; i = i->next);
    i->next = NULL;
    a->prev = NULL;

    i = b;
    for(;i->next != b; i = i->next);
    i->next = NULL;
    b->prev = NULL;

    //now we go from start to end

    while(curr_a && curr_b)
    {
        node *temp = new node;
        if(curr_a->exp > curr_b->exp)
        {
            temp->data = curr_a->data;
            temp->exp = curr_a->exp;
            curr_a = curr_a->next;
        }

        else if(curr_b->exp > curr_a->exp)
        {
            temp->data = curr_b->data;
            temp->exp = curr_b->exp;
            curr_b = curr_b->next;
        }

        else
        {
            temp->data = curr_a->data + curr_b->data;
            temp->exp = curr_a->exp;
            curr_a = curr_a->next;
            curr_b = curr_b->next;
        }

        if(sum)
        {
            curr->next = temp;
            sum->prev = temp;
            temp->next = sum;
            temp->prev = curr;
            curr = curr->next;
        }
        else
        {
            curr = sum = temp;
        }
    }

    //at this point we reach end of one list for sure hence we go on adding the next list

	node *current = curr_a ? curr_a : curr_b;

	while(current != NULL)
	{
		node *temp = new node(current->data, current->exp);
		temp->next = sum;
		temp->prev = curr;
		curr->next = temp;
		sum->prev = temp;
		current = current->next;
	}

	//now we get back circular lists

	i = a;
	for(; i->next; i = i->next);
    i->next = a;
    a->prev = i;

    i = b;
    for(;i->next; i = i->next);
    i->next = b;
    b->prev = i;
}
