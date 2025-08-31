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
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = tail->next;
}

bool sameTosame(Node *head1, Node *head2)
{
    Node *tmp = head1;
    Node *temp = head2;
    while (tmp != NULL && temp != NULL)
    {
        if (tmp->val != temp->val)
        {
            return false;
        }
        tmp = tmp->next;
        temp = temp->next;
    }
    return (tmp == NULL && temp == NULL);
}

int main()
{
    Node *head1 = NULL;
    Node *tail1 = NULL;
    int val;
    while (1)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_at_tail(head1, tail1, val);
    }
    Node *head2 = NULL;
    Node *tail2 = NULL;
    while (1)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_at_tail(head2, tail2, val);
    }
    if (sameTosame(head1, head2))
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
    return 0;
}