/*Given an integer array Arr of size N the task is to find the count of elements whose value is greater than all of its prior elements.

Note : 1st element of the array should be considered in the count of the result.

For example,

Arr[]={7,4,8,2,9}

As 7 is the first element, it will consider in the result.

8 and 9 are also the elements that are greater than all of its previous elements.

 

Since total of  3 elements is present in the array that meets the condition.

Hence the output = 3.

 

 Example 1:

Input 

5 -> Value of N, represents size of Arr

7-> Value of Arr[0]

4 -> Value of Arr[1]

8-> Value of Arr[2]

2-> Value of Arr[3]

9-> Value of Arr[4]

 

Output :

3

 

Example 2:

5   -> Value of N, represents size of Arr

3  -> Value of Arr[0]

4 -> Value of Arr[1]

5 -> Value of Arr[2]

8 -> Value of Arr[3]

9 -> Value of Arr[4]

 

Output : 

5 */


#include<bits/stdc++.h>
using namespace std;

void findCount(vector<int> &arr, int n){
    int cnt = 0;
    int maxi = 0;
    for(int i = 0; i < n; i++){
        if(maxi < arr[i]){
            maxi = arr[i];
            cnt++;
        }
    }
    cout << cnt;
}
int main(){
    int n;
    cout << "Enter size-->";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the element-->";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    findCount(arr, n);
    return 0;
    
}