#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int roll;
    int cls;
    int gpa;
    Student(int roll, int cls, int gpa)
    {
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};
Student *fun()
{
    Student rahim(10, 5, 4);
    Student *p = &rahim;
    return p;
}
int main()
{
    Student *p = fun();
    cout << p->roll << " " << p->cls << " " << p->gpa << endl;
    return 0;
}
// If we want return object as a pointer garbage value will printed
// Because static memory will automatically deleted
// Therefore we need dynamic object