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
int main()
{
    Student rahim(10, 5, 4);
    Student *karim = new Student(11, 5, 4);
    cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa << endl;
    cout << karim->roll << " " << karim->gpa << " " << karim->gpa << endl;
    return 0;
}