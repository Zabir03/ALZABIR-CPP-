// #include<bits/stdc++.h>
// using namespace std;
// class node{
//     public:
//         int data;
//         node* next;
//     public:
//         node(int data1, node* next1){
//             data = data1;
//             next = next1;
//         }
//     public:
//         node(int data1){
//             data = data1;
//             next = nullptr;
//         }
// };

//Function: Convert the Arr to LL
// node* convertArr2LL(vector<int> &arr){
//     node* head = new node(arr[0]);
//     node* mover = head;
//     for(int i = 1; i < arr.size(); i++){
//         node* temp = new node(arr[i]);
//         mover->next = temp;
//         mover = temp;
//     }
//     return head;
// }



// Function: Find Detect loop

// bool findDetect(node* head){
//     node* slow = head;
//     node* fast = head;
//     while(fast != nullptr && fast->next != nullptr){
//         slow = slow->next;
//         fast = fast->next->next;
//         if(slow == fast){
//             return true;
//         }
//     }
//     return false;
// }








//Function Print All the LL
// void print(node* head){
//     node* temp = head;
//     while(temp != nullptr){
//         cout << temp->data << " -> ";
//         temp = temp->next;
//     }
//     cout << "nullptr";
// }
// int main(){
//     int n;
//     cout << "Enter size of arr: ";
//     cin >> n;

//     vector<int> arr(n);
//     cout << "Enter the element of the Arr: ";
//     for(int i = 0; i < n; i++){
//         cin >> arr[i];
//     }

//     node* head = convertArr2LL(arr);

    



//     // print(head);
// }