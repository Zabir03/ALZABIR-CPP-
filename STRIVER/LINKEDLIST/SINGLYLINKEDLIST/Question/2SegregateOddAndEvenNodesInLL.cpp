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

//Function: Convert Array to LL;

node* convertArraytoLL(vector<int> &arr){
    node* head = new node(arr[0]);
    node* mover = head;
    for(int i = 1; i < arr.size(); i++){
        node* temp = new node(arr[i]);
        mover->next = temp;
        mover = temp;
    }

    return head;
}

//function: Separate Odd and Even Indcis

// Brute Force Approach

node* separateOddEven(node* head){
    if(head == nullptr || head->next == nullptr){
        return head;
    }
    vector<int> arr;
    node* temp = head;

    //step1

    while(temp != nullptr && temp->next != nullptr){
        arr.push_back(temp->data);
        temp = temp->next->next;
    }
    if(temp){
        arr.push_back(temp->data);
    }

    //step2
    temp = head->next;

    while(temp != nullptr && temp->next != nullptr){
        arr.push_back(temp->data);
        temp = temp->next->next;
    }
    if(temp){
        arr.push_back(temp->data);
    }

    //step3
    int i = 0;
    node* curr = head;
    while(curr != nullptr){
        curr->data = arr[i];
        i++;
        curr = curr->next;
    }

    return head;
}

// Optimal Approach

node* findOddEven(node* head){
    if(head == nullptr || head->next == nullptr){
        return head;
    }
    node* odd = head;
    node* even = head->next;
    node* evenhead = head->next;

    while(even != nullptr && even->next != nullptr)
    {
        odd->next = odd->next->next;
        even->next = even->next->next;

        odd = odd->next;
        even = even->next;
    }
    odd->next = evenhead;

    return head;
}

//Function: Print LL
void print(node* head){
    node* temp = head;
    while(temp != nullptr)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "nullptr";
}
int main(){
    int n;
    cout << "Enter size of arr: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the array element: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    node* head = convertArraytoLL(arr);
    // head = separateOddEven(head);

    head = findOddEven(head);

    print(head);

}