#include<iostream>
using namespace std;
bool isPerfectSquare(int x){
    int s = 0;
    int e = x;
    long long int ans = -1;
    while(s <= e){
        long long int mid = s + (e-s)/2;
        long long int square = mid * mid;
        if(square == x){
            return true;
        }
        if(square < x){
            ans = mid;
            s = mid + 1;
        }
        else{
            e  = mid - 1;
        }

    }
    return false;

}
int main(){
    int n;
    cout << "Enter number to ckeck perfect square ==> ";
    cin >> n;
    cout << isPerfectSquare(n);

}