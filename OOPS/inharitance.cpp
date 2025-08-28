#include<bits/stdc++.h>
using namespace std;
// single inheritance
class animal{
    public:
        void getrun(){
            cout << "Can run...."<<endl;
            cout << "Can eat...."<<endl;
            cout << "Can sleep...."<<endl;
        }
};
class cow: public animal{
    public:
        void get(){
            cout << "Give milk...";
        }
};

// multilevel inheritance


class A{
    public:
        void getInfo(){
            cout << "Name is--> Zabir"<<endl;
            cout << "Age is--> 22"<<endl;
        }
};
class B: public A{
    public:
        void getIn(){
            cout << "Profession--> Student"<<endl;
        }

};

class C: public B{
    public:
        void get(){
            cout <<"Dept--->CSE";
        }
};

//Multiple Inheritance

class student{
    public:
        
            void Info1(){
                cout << "This is Student 1"<< endl;
            }
        
};
class teacher{
    public:
        
            void Inf2(){
                cout << "This is a teacher 1"<< endl;
            }
        
};

class D: public student, public teacher{
    public:
        void Info3(){
            cout << "This is child class";
        }


};

int main(){
    // cow c1;
    // c1.getrun();
    // c1.get();


    // A info;
    // info.getInfo();
    // B info1;
    // info1.getIn();
    // C info2;
    // info2.get();


    student mystu;
    mystu.Info1();

    teacher mytech;
    mytech.Inf2();

D mya;
    mya.Info3();







    return 0;

}