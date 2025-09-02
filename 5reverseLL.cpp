#include<bits/stdc++.h>
using namespace std;
class node{
    public:
        int data;
        node* next;
    public:
        node(int data1, node* next1){
            data = data1;
            next = next1;
        }
    public:
        node(int data1){
            data = data1;
            next = nullptr;
        }
};

// Function convert Array to LL
node* convertArr2LL(vector<int> &arr){
    node* head = new node(arr[0]);
    node* mover = head;
    for(int i = 1; i < arr.size(); i++){
        node* temp = new node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

// Function Reverse the LL

//=======Brtue Force========
/*
--> Take Array and Assign the element form the linked list
--> Than reverse the Array order 
--> Then Again reassign the into the List

*/

node* reverseLL(node* head){
    vector<int> arr;
    node* temp = head;
    while(temp != nullptr){
        arr.push_back(temp->data);
        temp  = temp->next;
    }

    reverse(arr.begin(), arr.end());

    int i = 0;
    node* tmp = head;
    while(tmp != nullptr){
        tmp->data = arr[i];
        i++;
        tmp = tmp->next;
    }

    return head;
}



//================Itrative Approach=========
node* reverseLL2(node*  head){
    node* temp = head;
    node* prev = nullptr;

    while(temp != nullptr){
        node* front = temp->next;
        temp->next = prev;
        prev = temp;
        temp = front;
    }

    return prev;
}




//Function: print the LL
void print(node* head){
    node* temp = head;
    while(temp != nullptr){
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "nullptr";
}
int main(){
    int n;
    cout << "Enter the size of arr: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the value of arr element: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    node* head = convertArr2LL(arr);

    //head = reverseLL(head);

    head = reverseLL2(head);

    print(head);
}