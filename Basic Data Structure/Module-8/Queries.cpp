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
    head = newNode;
}

int count(Node *head)
{
    int cnt = 0;
    Node *tmp = head;
    while (tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}

void print(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << "\n";
}

void delete_at_any_Position(Node *&head, Node *&tail, int index)
{
    if (head == NULL || index < 0)
        return;

    if (index == 0)
    {
        Node *deleteNode = head;
        head = head->next;
        delete deleteNode;
        if (head == NULL)
        {
            tail = NULL;
        }
        return;
    }

    Node *tmp = head;
    for (int i = 0; i < index - 1; i++)
    {
        if (tmp == NULL || tmp->next == NULL)
            return;
        tmp = tmp->next;
    }

    Node *deleteNode = tmp->next;
    if (deleteNode == NULL)
        return;

    tmp->next = deleteNode->next;
    if (deleteNode == tail)
    {
        tail = tmp;
    }
    delete deleteNode;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int Q;
    cin >> Q;

    for (int i = 0; i < Q; i++)
    {
        int X;
        long long V;
        cin >> X >> V;

        if (X == 0)
        {
            insert_at_head(head, tail, (int)V);
            print(head);
        }
        else if (X == 1)
        {
            insert_at_tail(head, tail, (int)V);
            print(head);
        }
        else if (X == 2)
        {
            int length = count(head);
            if (V >= 0 && V < length)
            {
                delete_at_any_Position(head, tail, (int)V);
            }
            print(head);
        }
    }

    return 0;
}