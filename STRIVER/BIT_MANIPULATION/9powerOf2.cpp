#include<bits/stdc++.h>
using namespace std;
bool powerOf2(int n){
    if((n & (n - 1)) == 0){
        return true;
    }
    return false;
}
int main(){
    int n;
    cin >> n;
    cout << powerOf2(n);
}