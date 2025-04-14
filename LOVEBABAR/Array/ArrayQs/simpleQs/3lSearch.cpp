#include<iostream>
using namespace std;
bool Search(int arr[], int size, int key)
{
    for(int i=0; i < size; i++)
    {
        if(arr[i] == key)
        {
            return 1;
        }
    }
    return 0;

}
int main(){
    int arr[] = { 1, 3, 4, -8, 34, 7, 8, 22, 56, -1};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout << "Enter the element to search -->";
    int key;
    cin >> key;
    bool found = Search(arr, size, key);
    if(found)
    {
        cout << "Element is present. " << endl;
    }
    else
    {
        cout << "Element is not present." << endl;
    }

}