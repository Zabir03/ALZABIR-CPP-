// Every time you multiply by 5, you might get a zero at the end (if there’s also a 2 — and there are always more 2s than 5s in factorials).

// 🔢 Simple Steps:
// Let’s take n = 25

// Divide 25 ÷ 5 = 5 → There are 5 numbers divisible by 5 (they give at least one 5):

// Numbers: 5, 10, 15, 20, 25

// Divide 25 ÷ 25 = 1 → One of those numbers (25) gives an extra 5:

// Because 25 = 5 × 5 → It gives two 5s

// Add the results:

// 5 + 1 = 6
// → So, 25! has 6 trailing zeros


#include<bits/stdc++.h>
using namespace std;

void findTrailingZero(int n){
    int cnt = 0;
    for(int i = 5; n/i >= 1; i *= 5){
        cnt += n/i;
    }
    cout << cnt;
}
int main(){
    int n;
    cin >> n;
    findTrailingZero(n);
    
}