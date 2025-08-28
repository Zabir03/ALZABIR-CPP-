#include <bits/stdc++.h>
using namespace std;

class car {
private:
    string company;

public:
    string brand;
    int price;

    void setcar(string c) {
        company = c;
    }

    string getcar() {
        return company;
    }
}; 

int main() {
    car mycar;

    mycar.brand = "tata";
    mycar.price = 100000;
    mycar.setcar("moto");
    cout << mycar.getcar();

    return 0;
}
