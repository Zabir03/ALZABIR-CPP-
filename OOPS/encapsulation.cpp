#include <bits/stdc++.h>
using namespace std;

class bank
{
private:
    double salary;

public:
    string bankName;
    string customerName;

    void setSalary(double s)
    {
        salary = s;
    }

    double getSalary()
    {
        return salary;
    }
};
int main()
{
    bank myBank;
    myBank.bankName = "SBI";
    myBank.customerName = "Zabir";
    

    myBank.setSalary(10000);         
    cout << myBank.getSalary(); 

    return 0;
}