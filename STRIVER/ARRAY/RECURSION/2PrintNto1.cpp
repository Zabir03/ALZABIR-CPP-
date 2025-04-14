#include<bits/stdc++.h>
using namespace std;
void printNto1(int i, int n){
    if(i < 1) return;
    cout << i << " ";
    printNto1(i-1, n);
}
//another approach
void printn1(int n){
    if(n < 1) return;
    printn1(n-1);
}
int main(){
    int n;
    cin >> n;
    printNto1(n, n);
    printn1(n);
}