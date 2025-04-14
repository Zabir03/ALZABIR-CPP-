#include<iostream>
using namespace std;
int findPower( int a, int b){
    int ans = 1;
    while(b > 0){
        if(b % 2 == 1){
            ans = ans * a;
        }
        a = a * a;
        b = b / 2;
    }

    return ans;


}
int main(){
    int x;
    cout << "Enter number ==> ";
    cin >> x;
    int n;
    cout << "Enter power ==> ";
    cin >> n;
    cout << findPower(x,n);

}