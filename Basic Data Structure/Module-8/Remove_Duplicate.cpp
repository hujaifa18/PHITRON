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
void delete_node(Node *&head, Node *&tail)
{
    Node *i = head;
    while (i != NULL)
    {
        Node *prev = i;
        Node *j = i->next;
        while (j != NULL)
        {
            if (i->val == j->val)
            {
                prev->next = j->next;
                Node *toDelete = j;
                j = j->next;
                delete toDelete;
            }
            else
            {
                prev = j;
                j = j->next;
            }
        }
        i = i->next;
    }

    tail = head;
    if (tail == NULL)
        return;
    while (tail->next != NULL)
    {
        tail = tail->next;
    }
}
void print(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (1)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_at_tail(head, tail, val);
    }
    delete_node(head, tail);
    print(head);
    return 0;
}