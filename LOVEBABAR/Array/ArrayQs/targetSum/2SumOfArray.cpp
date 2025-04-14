#include<iostream>
using namespace std;
// int getSum(int num[], int n){
    // int count = 0;
    // for(int i = 0; i < n; i++){
        // count++;
    // }
    // return count;
// }

int main()
{
    int size;
    cout << "Enter the size of array -->";
    cin >> size;
    int num [10];
    for(int i = 0; i < size; i++){
        cin >> num[i];
    }
    int sum = 0;
    
    for(int i = 0; i < size; i++){
        sum = sum + num[i];

    }
   
    cout << " The sum of array elemnt is -->"<< sum;
    

}