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

int search(Node *head, long long x)
{
    Node *tmp = head;
    int index = 0;
    while (tmp != NULL)
    {
        if (tmp->val == x)
            return index;
        tmp = tmp->next;
        index++;
    }
    return -1;
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        Node *head = NULL;
        Node *tail = NULL;

        while (true)
        {
            long long val;
            cin >> val;
            if (val == -1)
                break;
            insert_at_tail(head, tail, val);
        }

        long long x;
        cin >> x;

        cout << search(head, x) << endl;
    }

    return 0;
}