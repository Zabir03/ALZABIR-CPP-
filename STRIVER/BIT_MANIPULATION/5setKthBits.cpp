#include<bits/stdc++.h>
using namespace std;
int kthSetBit(int n, int k){
    return (n | (1 << k));
}
int main(){
    int n , k;
    cin >> n >> k;
    cout << kthSetBit(n, k);
}