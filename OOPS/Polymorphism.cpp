#include<bits/stdc++.h>
using namespace std;


//complie time polymorphism
// Function overloading
// Same function name but parameter are differnce
class cal{
    public:
        void add(int a, int b){
            cout << a + b;
        }
        void add(int a, int b, int c){
            cout<< a+b+c;
        }
        void add(double a, double b){
            cout << a+b;
        }
};


//Run time polymorphsim
//function overriding

class p{
    public:
        virtual void  get(){
            cout << "This is Parent class."<<endl;
        }
};
class c: public p{
    public:
        void get() override{
            cout << "This is a child class" << endl;
        }
};


int main(){
    //  cal c1;
    //  c1.add(2.2, 5.0);


    p *c2;
    c c3;
    c2 = & c3;

    c2->get();


    return 0;

}