// Create a singly linked list and print the middle element.
//  If there are multiple values in the middle print both.
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
void print_val(Node *head)
{
    Node *tmp = head;
    int total = count(head);
    for (int i = 1; i < total / 2; i++)
    {
        tmp = tmp->next;
    }
    if (total % 2 == 0)
    {
        cout << tmp->val << endl;
        cout << tmp->next->val << endl;
    }
    else
    {
        cout << tmp->next->val << endl;
    }
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
    print_val(head);
    return 0;
}