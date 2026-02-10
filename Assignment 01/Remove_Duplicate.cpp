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

void printList(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int x;
    cin >> x;

    while (x != -1)
    {
        Node *newNode = new Node(x);
        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
        cin >> x;
    }

    Node *current = head;

    while (current != NULL)
    {
        Node *runner = current;
        while (runner->next != NULL)
        {
            if (runner->next->val == current->val)
            {
                Node *delNode = runner->next;
                runner->next = runner->next->next;
                delete delNode;
            }
            else
            {
                runner = runner->next;
            }
        }
        current = current->next;
    }

    printList(head);

    return 0;
}
