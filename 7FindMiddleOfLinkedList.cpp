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
            next   = nullptr;
        }
};
//Function convert Array to LL
node* convertArr2LL(vector<int> & arr){
    node* head = new node(arr[0]);
    node* mover = head;
    for(int i = 1; i < arr.size(); i++){
        node* temp = new node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}
//Function: Find middle of the LL;
//--->Brute Force Approach

/* step-1 Find the Length of the LL->O(n)
   step-2 Find the middle element-> O(n/2)
*/

// T.C-> O(n + n/2)
// S.C->O(1)

node* findmiddle(node* head){
    int cnt = 0;
    node* temp = head;
    while(temp != nullptr){
        cnt++;
        temp = temp->next;
    }

    int mid = cnt / 2 + 1;
    temp = head;
    while(temp != nullptr){
        mid--;
        if(mid == 0){
            break;
        }
        temp = temp->next;
    }
    return temp;
}

//Optimal Approach

// Using Tortoise and Hare Algorithm-> It is based on slow and fast point, slow move-> 1 step and fast move-> 2step
/*
For odd Lenght: When the fast pinter in the last node then stop and at that time the slow pointer point to the middle node;
For even lenght: When the fast pointer point to the null then stop and at that time the slow pointer point to the middle node


T.C-> O(n/2)
S.C-> O(1)

*/

node* findMid(node* head){
    node* slow = head;
    node* fast = head;

    while(fast != nullptr && fast->next != nullptr){
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
}


//Function Print all LL
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
    cout << "Enter the ssize of the Arr: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the element of the array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    node* head = convertArr2LL(arr);

    // head = findmiddle(head);

    head = findMid(head);

    print(head);
}