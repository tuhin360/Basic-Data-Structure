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
    int Q;
    cin >> Q;

    Node *head = NULL;
    Node *tail = NULL;

    while (Q--)
    {
        int X, V;
        cin >> X >> V;

        if (X == 0)
        {
            Node *newNode = new Node(V);
            if (head == NULL)
            {
                head = tail = newNode;
            }
            else
            {
                newNode->next = head;
                head = newNode;
            }
        }

        else if (X == 1)
        {
            Node *newNode = new Node(V);
            if (head == NULL)
            {
                head = tail = newNode;
            }
            else
            {
                tail->next = newNode;
                tail = newNode;
            }
        }

        else if (X == 2)
        {
            if (head == NULL)
            {
            }
            else if (V == 0)
            {
                Node *deleteNode = head;
                head = head->next;
                delete deleteNode;

                if (head == NULL)
                    tail = NULL;
            }
            else
            {
                Node *temp = head;
                for (int i = 0; i < V - 1 && temp != NULL; i++)
                {
                    temp = temp->next;
                }

                if (temp != NULL && temp->next != NULL)
                {
                    Node *deleteNode = temp->next;
                    temp->next = deleteNode->next;

                    if (deleteNode == tail)
                        tail = temp;

                    delete deleteNode;
                }
            }
        }

        printList(head);
    }

    return 0;
}
