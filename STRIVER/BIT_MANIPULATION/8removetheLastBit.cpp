#include<bits/stdc++.h>
using namespace std;
int removeSetBit(int n){
    return (n & (n - 1));
}
int main(){
    int n;
    cin >> n;
    cout << removeSetBit(n);
}