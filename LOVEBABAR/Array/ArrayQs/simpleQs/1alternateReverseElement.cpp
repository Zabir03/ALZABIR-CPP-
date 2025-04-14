#include<iostream>
using namespace std;
void alternatReverse(int arr[], int n)
{
    int temp;
    for(int i=0; i<n; i = i+2)
    {
        if(i+1 < n)
        {
           temp = arr[i];
           arr[i] = arr[i+1];
           arr[i+1] = temp;
        }
    }
    return ;
}

void printArray(int arr[], int n)
{
    cout << "Reverse element is -->" << endl;
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }

}
int main(){
    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    alternatReverse(arr, size);
    printArray(arr, size);

}