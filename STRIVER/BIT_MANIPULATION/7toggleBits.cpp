#include<bits/stdc++.h>
using namespace std;

//toggle Bite
int togglebit(int n, int k){
    return (n ^ (1 << k - 1));
}

//toggling kth rang

int togglingKthRange(int n, int k){
   
    for(int i = 1; i < k; i++){
        int ans = n << i;
        n = n ^ ans;
    }
    return n;
}
int main(){
    int n , k;
    cin >> n >> k;
    //cout << togglebit(n, k);
    //cout << endl;
    cout << togglingKthRange(n, k);
}