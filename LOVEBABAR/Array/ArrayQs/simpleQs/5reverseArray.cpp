#include <iostream>
using namespace std;
void Reverse(int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] <<" ";
    }
    cout << endl;
}
int main()
{
    int arr[10];
    cout << "Enter the array elemnt to reverse -->";
    for(int i=0; i<10; i++){
        cin >> arr[i];
    }

    Reverse(arr, 10);
    printArray(arr, 10);


    return 0;
}