#include<bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int cls;
    char section;
    int id;
    
    void get() {
        cin >> name >> cls >> section >> id;
    }
    
    void setSection(char s) {
        section = s;
    }
    
    void print() {
        cout << name << " " << cls << " " << section << " " << id << endl;
    }
};

int main()
{
    int n;
    cin >> n;
    vector<Student> students(n);
    vector<char> sections(n);
    
    for(int i = 0; i < n; i++) {
        students[i].get();
        sections[i] = students[i].section;
    }
   
    reverse(sections.begin(), sections.end());

    for(int i = 0; i < n; i++) {
        students[i].setSection(sections[i]);
        students[i].print();
    }
    
    return 0;
}
