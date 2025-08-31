#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node* next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void insert_at_tail(Node* &head,Node* &tail,int val)
{
    Node* newNode = new Node(val);
    if(head==NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = tail->next;
}
void print_revrse(Node* tmp)
{
    if(tmp == NULL)
    {
        return;
    }
    print_revrse(tmp->next);
    cout<<tmp->val<<endl;
}
int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    int val;
    while(1)
    {
        cin>>val;
        if(val == -1)
        {
            break;
        }
        insert_at_tail(head,tail,val);
    }
    print_revrse(head);
    return 0;
}