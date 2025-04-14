#include<bits/stdc++.h>
using namespace std;
void printNto1(int i, int n){
    if(i > n) return;
    printNto1(i+1, n);
    cout << i << " ";

}
int main(){
    int n;
    cin >> n;
    printNto1(1,n);


}