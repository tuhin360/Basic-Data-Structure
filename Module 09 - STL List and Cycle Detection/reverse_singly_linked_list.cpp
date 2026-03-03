#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);

    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }

    tail->next = newnode; // new node connect with tail node
    tail = tail->next;    // or, tail=newnode;   // moving tail pointer to new inserted node
}

void print_linked_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << endl;
        tmp = tmp->next;
    }
}

void reversed_linked_list(Node *&head,Node *&tail, Node *tmp)
{
    // base case
    if (tmp->next == NULL)
    {
        head = tmp;
        return;
    }

    // Recursive call
    reversed_linked_list(head,tail, tmp->next);

    tmp->next->next = tmp;
    tmp->next = NULL;
    tail = tmp;
}



int main()
{

    Node *head = NULL;
    Node *tail = NULL;

    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_at_tail(head, tail, val);
    }

    reversed_linked_list(head, tail, head);
    print_linked_list(head);
    cout << head->val << endl;
    cout << head->next->val << endl;
    cout << tail->val << endl;
    return 0;
}

// input : 10 20 30 40 50 -1

// output : 50 40 30 20 10