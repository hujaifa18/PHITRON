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
void insert_at_any_position(Node *&head, int index, int val)
{
    Node *newNode = new Node(val);
    Node *tmp = head;
    for (int i = 1; i < index; i++)
    {
        tmp = tmp->next;
    } // tmp at index-1
    newNode->next = tmp->next;
    tmp->next = newNode;
}
void print_List(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << endl;
        tmp = tmp->next;
    }
}
int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);

    head->next = a;
    a->next = b;
    insert_at_any_position(head, 2, 100);
    print_List(head);
    return 0;
}