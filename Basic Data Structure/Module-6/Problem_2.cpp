// Create a singly linked list and check if the linked list contains any duplicate value.
//  You can assume that the maximum value will be 100.
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
bool check(Node *head)
{
    Node *tmp = head;
    bool seen[101] = {false};
    while (tmp != NULL)
    {
        if (seen[tmp->val])
        {
            return true;
        }
        seen[tmp->val] = true;
        tmp = tmp->next;
    }
    return false;
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
    if (check(head))
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
    return 0;
}