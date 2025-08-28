#include <bits/stdc++.h>
using namespace std;

class teacher {
public:
    string name;
    int salary;
    string dept;

    teacher(string n, int s, string d) {
        name = n;
        salary = s;
        dept = d;
    }
};

int main() {
    teacher t1("zabir", 10000, "CSE");
    
    cout << "Name: " << t1.name << endl;
    cout << "Salary: " << t1.salary << endl;
    cout << "Department: " << t1.dept << endl;

    return 0;
}
