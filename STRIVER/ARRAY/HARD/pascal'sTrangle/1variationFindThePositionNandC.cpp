#include<bits/stdc++.h>
using namespace std;
long long int findPosition(int n, int c){
    n = n - 1;
    c = c - 1;
    long long int result = 1;
    for(int i = 0; i < c; i++){
        result = result * (n - i);
        result = result / (i + 1);
    }
    return result;
    
}
int main(){
    int n, c;
    cin >> n >> c;
    int element = findPosition(n, c);
    cout << "The position of n and c is -->" << element;

}