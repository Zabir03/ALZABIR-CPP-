#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
using namespace std;

int findLargest(vector<int> arr, int n)
{
    int largest = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largest)
            largest = arr[i];
    }
    cout << "The largest number is -->" << largest;
}

int find2ndLargest(vector<int> arr, int n)
{
    int largest = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largest)
            largest = arr[i];
    }

    int slargest = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > slargest && arr[i] != largest)
            slargest = arr[i];
    }
    cout << "The 2ndlargest is -->" << slargest;
}

int find2ndSmallAnd2ndLargest(vector<int> arr, int n)
{ // to find second largest number in array
    int largest = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largest)
            largest = arr[i];
    }
    int seclargest = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > seclargest && arr[i] != largest)
            seclargest = arr[i];
    }

    // to find the second smallest in a array

    int small = arr[n - 1];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < small)
            small = arr[i];
    }
    int secSmall = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < secSmall && arr[i] != small)
            secSmall = arr[i];
    }

    cout << "The second largest number is -->" << seclargest << endl
         << "The secondsmallest numberr is -->" << secSmall;
}

bool checkSort(vector<int> arr, int n)
{
    for (int i = 1; i < n; i++)
    {
        if (arr[i] >= arr[i - 1])
        {
        }
        else
        {
            cout << false;
        }
    }
    cout << true;
}

int findDuplicatSortedArray(vector<int> arr, int n)
{
    int i = 0;
    for (int j = 1; j < n; j++)
    {
        if (arr[i] != arr[j])
        {
            arr[i + 1] = arr[j];
            i++;
        }
    }
    // logic is correst but output syntax is wrong
    cout << "The Duplication element are -->" << (i + 1);
}

int leftRotatedArray(vector<int> arr, int n)
{
    int temp = arr[0];
    for (int i = 1; i < n; i++)
    {
        arr[i - 1] = arr[i];
    }
    arr[n - 1] = temp;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void leftRotationDplace(vector<int> &arr, int n, int k)
{

    k = k % n;

    vector<int> temp(k);

    for (int i = 0; i < k; i++)
    {
        temp[i] = arr[i];
    }
    // shifying
    for (int i = k; i < n; i++)
    {
        arr[i - k] = arr[i];
    }

    // put the temp value
    for (int i = n - k; i < n; i++)
    {
        arr[i] = temp[i - (n - k)];
    }

    // Printing the rotated array
}
// void reverse(vector<int> arr, int s, int e)
// {
// int n = arr.size();
// while (s <= e)
// {
// int temp = arr[0];
// arr[0] = arr[n - 1];
// arr[n - 1] = temp;
// s++;
// e--;
// }
// }
void leftRotatedDplace2(vector<int> &arr, int n, int d)
{
    d = d % n;
    reverse(arr.begin(), arr.begin() + d);
    reverse(arr.begin() + d, arr.end());
    reverse(arr.begin(), arr.end());
}

void rightRtationDplace(vector<int> & arr, int n, int d){
    if( n == 0) return;
    d = d % n;
    reverse(arr.begin(), arr.end());
    reverse(arr.begin(), arr.begin() + d);
    reverse(arr.begin() + d, arr.end());
    return;
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    findLargest(arr, n);
    cout << endl;

    find2ndLargest(arr, n);
    cout << endl;

    find2ndSmallAnd2ndLargest(arr, n);
    cout << endl;

    checkSort(arr, n);
    cout << endl;

    findDuplicatSortedArray(arr, n);
    cout << endl;

    leftRotatedArray(arr, n);
    cout << endl;

    int d;
    cin >> d;
    leftRotationDplace(arr, n, d);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    int k;
    cout << " Enter the value of k-- >";
    cin >> k;
    leftRotatedDplace2(arr, n, k);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;


    int k1;
    cout << "Enter the value of k1 -->";
    cin >> k1;
    rightRtationDplace(arr, n, k1);
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

}