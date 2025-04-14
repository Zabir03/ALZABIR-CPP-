#include<iostream>
using namespace std;
long long int fibonacci(long long int x){
    
    if(x == 0){
        return 0;
    }
    if(x == 1){
        return 1;
    }
    else{
        return (fibonacci(x-1) + fibonacci(x-2));
    }

}
int main(){
long long int n;
cout << "Enter the number of terms you want to print: ";
cin >> n;
long long int fibo = fibonacci(n);
for(long long int i = 0; i < n; i++){
    cout << fibonacci(i) << " ";
}
//cout << fibonacci(n) << " ";
}