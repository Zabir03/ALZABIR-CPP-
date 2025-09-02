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

//Function: Convert the Arr to LL
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

//Function: Check Palindrome or not

//Brute force

bool checkPalindrome(node* head){
    //step->1 Convert to arr

    vector<int> arr;
    node* temp = head;
    while(temp != nullptr){
        arr.push_back(temp->data);
        temp = temp->next;
    }

    int l = 0;
    int r = arr.size() - 1;
    while(l < r){
        if(arr[l] != arr[r]){
            return false;
        }
        l++;
        r--;
    }
    return true;
}

// Optimal Approach
/*
Step-by-step logic:

1->Find middle → slow ends at mid (for odd length) or just before second half (for even length).

2->Reverse second half → now we can compare end-to-start easily.

3->Compare halves → move first from beginning, second from reversed half.

4->Restore → reverse back the second half so original list structure is preserved.

5->Return result → palindrome or not.

*/

//Function Reverse the function
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
bool checkPalindrome1(node* head){
    if(head == nullptr || head->next == nullptr){
        return true;
    }
    // Step 1: Find the middle of the linked list using slow & fast pointers
    node* slow = head; 
    node* fast = head;
    while(fast->next != nullptr && fast->next->next != nullptr)
    {
        slow = slow->next; // moves 1 step
        fast = fast->next->next; // moves 2 steps
    }

    // Now 'slow' points to the middle node

    // Step 2: Reverse the second half of the list

    node* newHead = reverse(slow->next);

    // Step 3: Compare first half and reversed second half

    node* first = head; // pointer for first half
    node* second = newHead; // pointer for second half

    while(second != nullptr) // only need to check second half
    {
        if(first->data != second->data){
            reverse(newHead); // restore list before returning
            return false;  // mismatch → not palindrome
        }

        // move both forward
        first = first->next;
        second = second->next;
    }

    // Step 4: Restore the list back to original form

    reverse(newHead);

    // Step 5: If all matched, it's a palindrome
    return true;
}

//Function Print All the LL
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
    cout << "Enter size of arr: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the element of the Arr: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    node* head = convertArr2LL(arr);

    // checkPlaindrome(head);
    //Brute Force
     if (checkPalindrome(head)) {
        cout << "Palindrome Linked List\n";
    } else {
        cout << "Not a Palindrome Linked List\n";
    }

    // Optimal
    if (checkPalindrome1(head)) {
        cout << "Palindrome Linked List\n";
    } else {
        cout << "Not a Palindrome Linked List\n";
    }



    // print(head);
}