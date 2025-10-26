#include <bits/stdc++.h>
using namespace std;
class myStack
{
public:
    vector<int> v;
    void push(int val) // O(1)
    {
        v.push_back(val);
    }
    void pop() // O(1)
    {
        v.pop_back();
    }
    int top() // O(1)
    {
        return v.back();
    }
    int size() // O(1)
    {
        return v.size();
    }
    bool empty() // O(1)
    {
        return v.empty();
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
    return 0;
}
// Before using pop and top
// Always check if the stack is empty or not