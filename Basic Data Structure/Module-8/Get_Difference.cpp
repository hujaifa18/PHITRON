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
void insert_at_tail(Node *&head, Node *&tail, long long val)
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
int max(Node *head)
{
    long long max = INT_MIN;
    for (Node *i = head; i != NULL; i = i->next)
    {
        if (i->val > max)
        {
            max = i->val;
        }
    }
    return max;
}
int min(Node *head)
{
    long long min = INT_MAX;
    for (Node *i = head; i != NULL; i = i->next)
    {
        if (i->val < min)
        {
            min = i->val;
        }
    }
    return min;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    long long val;
    while (1)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_at_tail(head, tail, val);
    }
    int maxm = max(head);
    int minm = min(head);
    cout << maxm - minm << endl;
    return 0;
}