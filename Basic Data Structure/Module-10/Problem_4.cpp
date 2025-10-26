// You have a doubly linked list which is empty initially.
// You need to take a value Q which refers to queries.
// For each query you will be given X and V.
// You will insert the value V to the Xth index of the doubly linked list and
// print the list in both left to right and right to left.
// If the index is invalid then print “Invalid”.
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
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
    newNode->prev = tail;
    tail = newNode;
}
void insert_at_head(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}
void insert_at_any_position(Node *&head, int index, int val)
{
    Node *newNode = new Node(val);
    Node *tmp = head;
    for (int i = 1; i < index; i++)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next->prev = newNode;
    tmp->next = newNode;
    newNode->prev = tmp;
}
int count(Node *head)
{
    Node *tmp = head;
    int cnt = 0;
    while (tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}
void forward(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
void backward(Node *tail)
{
    Node *tmp = tail;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val, q, x;
    cin >> q;
    for (int i = 1; i <= q; i++)
    {
        cin >> x >> val;
        int size = count(head);
        if (x == 0)
        {
            insert_at_head(head, tail, val);
            forward(head);
            backward(tail);
        }
        else if (x == size)
        {
            insert_at_tail(head, tail, val);
            forward(head);
            backward(tail);
        }
        else if (x > size)
        {
            cout << "Invalid\n";
        }
        else
        {
            insert_at_any_position(head, x, val);
            forward(head);
            backward(tail);
        }
    }
    return 0;
}