#include<iostream>
using namespace std;
long long int SQRTInteger(int x){
    int s = 0;
    int e = x;
    long long int ans = -1;
    while(s <= e){
        long long int mid = s + (e-s)/2;
        long long int square = mid * mid;
        if(square == x){
            return mid;
        }
        if(square < x){
            ans = mid;
            s = mid + 1;
        }
        else{
            e  = mid - 1;
        }

    }
    return ans;
}
double morePrecision(int n, int precision, int tempSol ){
    double factor = 1;
    double ans = tempSol;
    for(double i = 0; i < precision; i++ ){
        factor = factor/10;
        for(double j = ans; j*j <n; j = j + factor)
        {
            ans = j;
        }
    }
    return ans;


}
int main(){
    int n;
    cout << "Enter number to find SQRT ==> ";
    cin >> n;
    long long int tempSol = SQRTInteger(n);
    cout << "SQRT of " << n << " is ==> " << morePrecision(n, 3, tempSol);

    return 0;




}