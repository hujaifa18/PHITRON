#include <bits/stdc++.h>
using namespace std;
class myStack
{
public:
    list<int> l;
    void push(int val) // O(1)
    {
        l.push_back(val);
    }
    void pop() // O(1)
    {
        l.pop_back();
    }
    int top() // O(1)
    {
        return l.back();
    }
    int size() // O(1)
    {
        return l.size();
    }
    bool empty() // O(1)
    {
        return l.empty();
    }
};
int main()
{
    myStack st;
    st.push(10);
    st.push(20);
    st.push(30);
    if (!st.empty())
        cout << st.top() << endl;
    if (!st.empty())
        st.pop();
    cout << st.top() << endl;
    st.pop();
    cout << st.size() << endl;
    st.pop();
    cout << st.size() << endl;
    cout << st.empty() << endl;

    myStack st1;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st1.push(x);
    }
    while (!st1.empty())
    {
        cout << st1.top() << " ";
        st1.pop();
    }
    cout << endl;
    return 0;
}