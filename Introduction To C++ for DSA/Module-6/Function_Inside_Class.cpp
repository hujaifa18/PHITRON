#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int math;
    int eng;
    Student(string name, int roll, int math, int eng)
    {
        this->name = name;
        this->roll = roll;
        this->math = math;
        this->eng = eng;
    }
    void hello()
    {
        cout << "Hello from " << name << endl;
    }
    void total()
    {
        cout << "Total of " << name << " = " << math + eng << endl;
    }
};
int main()
{
    Student sakib("Sakib Ahmed", 23, 90, 95);
    cout << sakib.name << " " << sakib.roll << endl;
    sakib.hello();
    sakib.total();
    Student rakib("Rakib Ahmed", 24, 99, 100);
    rakib.hello();
    rakib.total();
    return 0;
}