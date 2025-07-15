#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    char name[100];
    int roll;
    double gpa;
};
int main()
{
    Student s, s1;
    cin >> s.name >> s.roll >> s.gpa;
    cin >> s1.name >> s1.roll >> s1.gpa;
    cout << s.name << " " << s.roll << " " << s.gpa << endl;
    cout << s1.name << " " << s1.roll << " " << s1.gpa << endl;
    return 0;
}