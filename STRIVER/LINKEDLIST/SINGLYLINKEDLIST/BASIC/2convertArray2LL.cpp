#include<bits/stdc++.h>
using namespace std;
class node{
    public:
        int data;
        node* next;

         // Constructor 1: For single value
    public:
        node(int data1){
            data = data1;
            next = nullptr;
        }

         // Constructor 2: Full constructor (optional if you use only one argument)
    public:
        node(int data1, node* next1){
            data = data1;
            next = next1;
        }
};

// Function to convert an array to a linked list

node* convertArr2ll(vector<int> &arr){
    if(arr.size() == 0) return nullptr;

    // Create head of the linked list
    node* head = new node(arr[0]);
    node* mover = head;


    /* Iterate through the array 
   and create linked list nodes*/

    for(int i = 1; i < arr.size(); i++){
        node* temp = new node(arr[i]);
        mover->next = temp;
        mover = temp;
    }

    return head;
}

//function print the linked list

void printLL(node* head){
    node* mover = head;
    while(mover != nullptr){
        cout << mover->data << " -> ";
        mover = mover->next;
    }
    cout << "nullPtr"<<endl;
}

int main(){
    int n;
    cout << "Enter size of arr->";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter value of array->";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << "After converting to linkedList:  ";
    node* head = convertArr2ll(arr);
    
    printLL(head);

    return 0;
}