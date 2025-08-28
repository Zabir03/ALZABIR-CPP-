#include<bits/stdc++.h>
using namespace std;
int binary2Decimal(string s){
    int x = s.size();
    int p2 = 1;
    int num = 0;
    for(int i = x - 1; i >= 0; i--){
        if(s[i] == '1'){
            num += p2;
        }
        p2 *= 2;
    }
    return num;
}
int main(){
    string s;
    cin >> s;
    cout << binary2Decimal(s);
}