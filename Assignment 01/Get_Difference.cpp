#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    long long val;
    Node *next;

    Node(long long val)
    {
        this->val = val;
        this->next = NULL;
    }
};

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    long long x;
    cin >> x;

    while (x != -1)
    {
        Node *newNode = new Node(x);

        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }

        cin >> x;
    }

    if (head == NULL)
    {
        cout << 0;
        return 0;
    }

    long long mx = head->val;
    long long mn = head->val;

    Node *temp = head;

    while (temp != NULL)
    {
        mx = max(mx, temp->val);
        mn = min(mn, temp->val);
        temp = temp->next;
    }

    cout << mx - mn;

    return 0;
}
