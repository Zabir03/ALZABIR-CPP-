#include<bits/stdc++.h>
using namespace std;

class node {
public:
    int data;
    node* next;
    node(int data1, node* next1) {
        data = data1;
        next = next1;
    }
    node(int data1) {
        data = data1;
        next = nullptr;
    }
};

// Function: Convert array to LL
node* convertArr2LL(vector<int>& arr) {
    if (arr.empty()) return nullptr;
    node* head = new node(arr[0]);
    node* mover = head;
    for (int i = 1; i < arr.size(); i++) {
        node* temp = new node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

// Function: Find the intersection point of two LL
node* collision(node* t1, node* t2, int d) {
    while (d-- && t2) {
        t2 = t2->next;
    }
    while (t1 && t2 && t1 != t2) {
        t1 = t1->next;
        t2 = t2->next;
    }
    return (t1 == t2 ? t1 : nullptr);  // return nullptr if no intersection
}

node* findIntersectionPint(node* head1, node* head2) {
    int n1 = 0, n2 = 0;
    node* t1 = head1;
    node* t2 = head2;

    while (t1) { n1++; t1 = t1->next; }
    while (t2) { n2++; t2 = t2->next; }

    if (n1 < n2) {
        return collision(head2, head1, n2 - n1);
    } else {
        return collision(head1, head2, n1 - n2);
    }
}

// Function: Print all LL elements
void print(node* head) {
    node* temp = head;
    while (temp) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "nullptr" << endl;
}

int main() {
    int n1;
    cout << "Enter the size of array: ";
    cin >> n1;
    vector<int> arr1(n1);
    cout << "Enter the ele of the array: ";
    for (int i = 0; i < n1; i++) cin >> arr1[i];

    int n2;
    cout << "Enter the size of 2nd arr: ";
    cin >> n2;
    vector<int> arr2(n2);
    cout << "Enter the ele of the array: ";
    for (int i = 0; i < n2; i++) cin >> arr2[i];

    node* head1 = convertArr2LL(arr1);
    node* head2 = convertArr2LL(arr2);

    // ✅ Optional: Create intersection for testing
    if (head1 && head2) {
        node* temp1 = head1;
        for (int i = 0; i < 2 && temp1; i++) temp1 = temp1->next; // move to 3rd node
        node* temp2 = head2;
        while (temp2->next) temp2 = temp2->next;
        temp2->next = temp1;  // make intersection
    }

    // Print both lists
    cout << "List1: ";
    print(head1);
    cout << "List2: ";
    print(head2);

    node* intersect = findIntersectionPint(head1, head2);
    if (intersect)
        cout << "Intersection at node with value: " << intersect->data << endl;
    else
        cout << "No intersection" << endl;

    return 0;
}
