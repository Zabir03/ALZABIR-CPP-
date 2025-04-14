#include<bits/stdc++.h>
using namespace std;
//functional way approach
int sum(int n){
    if(n == 0) return 0;
    return n+sum(n-1);
    
}
// Parameter way approach
void sumf(int i, int sum){
    if(i < 1){
        cout << sum;
        return;
    }
    return sumf(i-1, sum+i);

}
int main(){
    int n;
    cin >> n;
    cout << sum(n);
    cout << endl;
    sumf(n,0);
}