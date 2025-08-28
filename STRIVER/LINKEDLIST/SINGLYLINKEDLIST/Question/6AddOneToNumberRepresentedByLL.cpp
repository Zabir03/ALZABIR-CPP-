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

//Function: Convert Array to Linked List
node* convertArr2LL(vector<int> &arr){
    node* head = new node(arr[0]);
    node* mover = head;

    for(int i = 0; i < arr.size(); i++){
        node* temp = new node(arr[i]);
        mover->next = temp;
        mover = temp;
    }

    return head;
}
//Function: Reverse the LL
node* reverse(node* head){
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
//Function: Add one to LL
node* addOne2LL(node* head){
    head = reverse(head);
    node* temp = head;
    int carry = 1;
    while (temp != nullptr)
    {
        temp->data = temp->data + carry;
        if(temp->data < 10){
            carry = 0;
            break;
        }
        else{
            temp->data = 0;
            carry = 1;
        }
        temp = temp->next;
    }
    if(carry == 1){
        node* newnode = new node(1);
        head = reverse(head);
        newnode->next = head;
        return newnode;
    }
    head = reverse(head);
    return head;
}

// Function: print all LL
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
    cout << "Enter the size  of array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the value of Array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    node* head = convertArr2LL(arr);

    head = addOne2LL(head);

    print(head);

    
}