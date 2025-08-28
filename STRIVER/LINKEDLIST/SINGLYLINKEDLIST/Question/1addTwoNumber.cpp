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

// ==============Function: Convert Array to LinkedList===============

node* convertl1(vector<int> &arr){
    node* head = new node(arr[0]);
    node* mover = head;
    for(int i = 1; i < arr.size(); i++){
        node* temp = new node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

// =============FUnction:  Add two Number=============

node* addTwoNumber(node* head1, node* head2){
    node* t1 = head1;
    node* t2 = head2;
    node* dummy = new node(-1);
    node* curr = dummy;

    int carry = 0;
    while(t1 != nullptr || t2 != nullptr){
        int sum = carry;
        if(t1) sum = sum + t1->data;
        if(t2) sum = sum + t2->data;

        node* newnode = new node(sum % 10);
        carry = sum / 10;

        curr->next = newnode;
        curr = curr->next;

        if(t1) t1 = t1->next;
        if(t2) t2 = t2->next;
    }
    if(carry){
        node* newnode = new node(carry);
        curr->next = newnode;
    }

    return dummy->next;
}


// ==================Function: Print the Linked List=====================

void print(node* head){
    node* temp = head;
    while(temp != nullptr){
        cout << " -> " << temp->data;
        temp = temp->next;
    }
    cout << " -> nullptr";
}


int main(){
    int n;
    cout << "Enter the size(n) of arr1: ";
    cin >> n;

    vector<int> arr1(n);
    cout << "Enter the value of arr1: ";
    for(int i = 0; i < n; i++){
        cin >> arr1[i];
    }

    int m;
    cout << "Enter the size(m) of arr2:";
    cin >> m;

    vector<int> arr2(m);
    cout << "Enter the value arr2: ";
    for(int i = 0; i < m; i++){
        cin >> arr2[i];
    }


    node* head1 = convertl1(arr1);
    node* head2 = convertl1(arr2);

    node* head = addTwoNumber(head1, head2);

    print(head);

    return 0;
}