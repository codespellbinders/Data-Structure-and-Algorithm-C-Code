#include<iostream>
#include<conio.h>

using namespace std;

struct node{
	int data;
	node *next;
};

class linked_list{
	private:
		node *head, *tail;
	public:
		linked_list(){
			head = NULL;
			tail = NULL;
		}
	void add_node(int n){
		node *temp = new node;
		temp->data = n;
		temp->next = NULL;
		cout<<n<<" is added to the List."<<endl;
	}

};
int main()
{
	linked_list obj;
	obj.add_node(10);
	obj.add_node(20);
	obj.add_node(30);
	obj.add_node(40);
	obj.add_node(50);
	return 0;
}

