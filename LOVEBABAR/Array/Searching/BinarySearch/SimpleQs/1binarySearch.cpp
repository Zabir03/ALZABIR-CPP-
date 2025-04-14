#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size-1;
    //int mid = (start+end)/2;

    //More optimize way
    int mid = start + (end - start)/2;

    while(start <= end )
    {
        if(arr[mid] == key){
            return mid;
        }
        // Go to right
        if(key > arr[mid]){
            start = mid + 1;
        }
        // Go to left when key < arr[mid]
        else{
            end = mid - 1;
        }
        //mid = (start+end)/2;

        mid = start + (end - start)/2; //mid value now update (start value or end value), so we can find again mid

    }
    return -1;
}
int main()
{
    int evenarr[6] = {2,4,5,6,8,9};
    int oddarr[5] = {2,4,53,57,89};

    int evenindex = binarySearch(evenarr, 6, 2);
    cout << "index of 2 is --> " << evenindex;
    
    cout << endl;

    int oddindex = binarySearch(oddarr, 5, 2);
    cout << "index of 2 is --> " << oddindex;

    return 0;

}