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
Student fun()
{
    Student rahim(10, 5, 4);
    return rahim;
}
int main()
{
    Student obj = fun();
    cout << obj.roll << " " << obj.cls << " " << obj.gpa << endl;
    return 0;
}