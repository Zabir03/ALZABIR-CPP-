#include<bits/stdc++.h>
using namespace std;
bool checkPlaindrome(string s, int i){
    if(i >= s.size()/2) return true;
    if(s[i] != s[s.size() - i - 1]) return false;
    return checkPlaindrome(s, i+1);
}
int main(){
    int n;
    cin >> n;
    string s[n];
    for(int i = 0; i < n; i++){
        cin >> s[i];
        cout << checkPlaindrome(s[i],0);
    }
   
}