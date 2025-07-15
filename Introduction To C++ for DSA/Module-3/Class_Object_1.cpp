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
    Student s;
    s.gpa = 4.00;
    s.roll = 18;
    char temp[100] = "Hujaifa";
    strcpy(s.name, temp);
    cout << s.name << " " << s.roll << " " << s.gpa << endl;
    return 0;
}