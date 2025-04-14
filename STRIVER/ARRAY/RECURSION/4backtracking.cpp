#include<bits/stdc++.h>
using namespace std;
void print1toN(int i, int n){
    if(i < 1) return;
    print1toN(i-1,n);
    cout << i << " ";

}
int main(){
    int n;
    cin >> n;
    print1toN(n,n);
}