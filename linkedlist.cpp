#include<bits/stdc++.h>

using namespace std;

struct Node
{
	int data;
	struct Node *next;
};
  
	void traverselist(struct Node *n)         //For traversing the list
	{
		while(n!=NULL)
		{
			cout << n->data << "\n";
		n=n->next;
		}

	}

	void insert(struct Node **n1,int new_data) 	//For inserting new node at start
	{
		struct Node* new_n=(struct Node*) malloc(sizeof(struct Node));
		new_n->data=new_data;
		new_n->next = (*n1);
		(*n1) = new_n;

	}



	void insertlastnode(struct Node **n2 , int new_data1)
	{
		struct Node* new_n1=(struct Node*)malloc(sizeof(struct Node));
		struct Node * last = *n2;
		new_n1->data=new_data1;
		new_n1->next=NULL;
		while(last->next != NULL)
		{
			last=last->next;
		}
		last->next = new_n1;
		return ;
	}

	void reverse(node*&head)
	{
		node*p;
		node*c;
	}
int main()
{


	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	struct Node *head = NULL;
	struct Node *second =NULL;
	struct Node *third=NULL;

	head=(struct Node*)malloc(sizeof(struct Node));
	second=(struct Node*)malloc(sizeof(struct Node));
	third=(struct Node*)malloc(sizeof(struct Node));


	head->data=20;
	head->next=second;
	second->data=25;
	second->next=third;
	third->data=30;
	third->next=NULL;

	
	insert(&head,45);
	insertlastnode(&head,67);
	traverselist(head);

	
	



	return 0;

}
