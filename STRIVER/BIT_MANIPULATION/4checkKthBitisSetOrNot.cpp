#include<bits/stdc++.h>
using namespace std;
bool checkKthBit(int n, int k){
    if((n & (1 << k - 1)) != 0){
        return true;
    }
    return false;

}
int main(){
    int n, k;
    cin >> n >> k;
    cout << checkKthBit(n, k);
}