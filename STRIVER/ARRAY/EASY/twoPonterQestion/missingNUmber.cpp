#include<bits/stdc++.h>
using namespace std;
//approach 1 using sum operation
// int missingNumber1(vector<int> &arr, int n){
    // int sum = n*(n+1)/2;
    // int sum2 = 0;
    // for(int i = 0; i < n-1; i++){
        // sum2 += i;
    // }
    // return sum-sum2;
// }
//approach 2 Using Xor operation
int missingNumber2(vector<int> &arr, int n){
    int xor1 = 0;
    for(int i = 1; i <= n; i++){
        xor1 ^= i; 
    }
    int xor2 = 0;
    for(int i = 0; i < n - 1; i++){
        xor2 ^= arr[i];
    }
    return (xor1^xor2);
}
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    //cout << missingNumber1(arr, n) << endl;

    cout << missingNumber2(arr, n);

}