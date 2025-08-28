#include<bits/stdc++.h>
using namespace std;
int numberOf1(int n){
    int cnt = 0;
    while(n != 0){
        if(n & 1) cnt++;
        n = n >> 1;
    }
    return cnt;
}
int main(){
    int n;
    cin >> n;
    cout << numberOf1(n);
}