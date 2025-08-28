#include<bits/stdc++.h>
using namespace std;

class A{
    private:
        string s = "Engine is working....";
    
    public:
        void info(){
            cout << s;
        }
};
int main(){

    A c;
    c.info();
    return 0;

}