#include <bits/stdc++.h>

using namespace std;

struct Node
{
	int data;
	struct Node *llink;
	struct Node *rlink;
	Node(int data)
	{
		this->data = data;
		llink = NULL;
		rlink = NULL;
	}
};

void inorder(struct Node *root)
{
	stack<Node *> s;
	Node *curr = root;

	while(curr != NULL || s.empty()== false)
	{
		while(curr != NULL)
		{
			s.push(curr);
			curr = curr->llink;
		}

		curr = s.top();
		s.pop();
		cout<<curr->data<<endl;

		curr = curr->rlink;
	}
}

int main()
{
	struct Node *root = new Node(1);
	root->llink = new Node(2);
	root->rlink = new Node(3);
	root->llink->llink = new Node(4);
	root->llink->rlink = new Node(5);
	inorder(root);
	return 0;
}