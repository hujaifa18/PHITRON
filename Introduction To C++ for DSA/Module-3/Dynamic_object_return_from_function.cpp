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
    Student *rahim = new Student(10, 5, 4);
    return rahim;
}
int main()
{
    Student *p = fun();
    cout << p->roll << " " << p->cls << " " << p->gpa << endl;
    return 0;
}
