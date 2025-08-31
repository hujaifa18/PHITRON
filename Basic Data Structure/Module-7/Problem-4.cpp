// Take a singly linked list as input, then take q queries.
// In each query you will be given an index and value.
// You need to insert those values in the given index and print the linked list.
//  If the index is invalid print “Invalid”.
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
int count(Node *head)
{
    Node *tmp = head;
    int count = 0;
    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    return count;
}
void insert_at_any_position(Node *&head, int index, int value)
{
    Node *newNode = new Node(value);
    Node *tmp = head;
    for (int i = 1; i < index; i++)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
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
void insert_at_head(Node *&head, Node *tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head = newNode;
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
    int index;
    while (cin >> index >> val)
    {
        int size = count(head);
        if (index > size)
        {
            cout << "Invalid\n";
        }
        else if (index == size)
        {
            insert_at_tail(head, tail, val);
            print(head);
        }
        else if (index == 0)
        {
            insert_at_head(head, tail, val);
            print(head);
        }
        else
        {
            insert_at_any_position(head, index, val);
            print(head);
        }
    }
    return 0;
}