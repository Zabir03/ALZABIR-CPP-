#include<bits/stdc++.h>
using namespace std;
class man {
    public:

    string name;
    int age;
    string address;
    
    void input(){
        
        getline(cin , name);
        cin >> age;
        getline(cin, address);
    }

    void myclass(){
        cout << "Man Name-->" << name;
        cout << "Man age-->" << age;
        cout << "Man address-->" << address;
    }
};

int main(){

    man myman;
    myman.input();
    myman.myclass();

    return 0;


}