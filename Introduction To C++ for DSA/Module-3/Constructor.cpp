#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int roll;
    int cls;
    int gpa;
    Student(int r, int c, int g)
    {
        roll = r;
        cls = c;
        gpa = g;
    }
};
int main()
{
    Student rahim(10, 5, 4);
    Student karim(11, 5, 4);
    cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa << endl;
    cout << karim.roll << " " << karim.cls << " " << karim.gpa << endl;
    return 0;
}