#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int val;
    node *next;

public:
    node(int data1, node *next1)
    {
        val = data1;
        next = next1;
    }

public:
    node(int data1)
    {
        val = data1;
        next = nullptr;
    }
};

node *convertArr2LL(vector<int> &arr)
{
    node *head = new node(arr[0]);
    node *mover = head;
    for (int i = 1; i < arr.size(); i++)
    {
        node *temp = new node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

// =======================Brute Force==========================

/*
✅ Complexity

Time Complexity:

Collecting elements: O(m + n)

Sorting: O((m + n) log (m + n))

Rebuilding list: O(m + n)

Total = O((m + n) log (m + n))

Space Complexity:

Extra vector storing all elements → O(m + n)


🔑 Logic in Words

Traverse both input linked lists and collect all values in a vector.

Sort the vector (because both lists are sorted, but you didn’t use that fact here).

Build a new sorted linked list from the sorted vector.

Return the new list’s head.

*/

// Function to merge two sorted linked lists
node *mergeTwoLists1(node *list1, node *list2)
{
    vector<int> arr; // Step 1: Temporary storage for all node values

    // Step 2: Traverse first list and store values
    node *temp1 = list1;
    while (temp1 != NULL)
    {
        arr.push_back(temp1->val); // add value to array
        temp1 = temp1->next;       // move to next node
    }

    // Step 3: Traverse second list and store values
    node *temp2 = list2;
    while (temp2 != NULL)
    {
        arr.push_back(temp2->val); // add value to array
        temp2 = temp2->next;       // move to next node
    }

    // Step 4: Sort the collected values
    sort(arr.begin(), arr.end());

    // Step 5: Create a new sorted linked list from array
    node *dummyNode = new node(-1); // dummy head
    node *temp = dummyNode;
    for (int i = 0; i < arr.size(); i++)
    {
        temp->next = new node(arr[i]); // create new node
        temp = temp->next;             // move forward
    }

    // Step 6: Return the actual head (skip dummy node)
    return dummyNode->next;
}

// ===================Optimal Approach====================

/*

✅ Complexity

Time Complexity: O(m + n) → each list is traversed once.

Space Complexity: O(1) → no extra array, just pointer manipulation.



🔑 Logic in Words

Use a dummy node to simplify handling the head of the merged list.

Traverse both lists:

Always pick the smaller node between t1 and t2.

Move the corresponding pointer forward.

Once one list is fully used, link the rest of the other list.

Return the merged list starting from dNode->next.
*/
// Function: Convert the ARR to LL


// Function: Merge to LL

node *mergeTwoLists(node *list1, node *list2)
{
    // Pointers to traverse list1 and list2
    node *t1 = list1;
    node *t2 = list2;

    // Dummy node (acts as a placeholder head for easier handling)
    node *dNode = new node(-1);
    node *temp = dNode; // temp points to the last node in the merged list

    // Step 1: Traverse both lists while both have nodes
    while (t1 != nullptr && t2 != nullptr)
    {
        if (t1->val < t2->val)
        {                    // if t1 has smaller value
            temp->next = t1; // link t1 to merged list
            temp = t1;       // move temp forward
            t1 = t1->next;   // advance t1
        }
        else
        {                    // if t2 has smaller or equal value
            temp->next = t2; // link t2 to merged list
            temp = t2;       // move temp forward
            t2 = t2->next;   // advance t2
        }
    }

    // Step 2: If any list still has remaining nodes, attach it
    if (t1)
        temp->next = t1;
    else
        temp->next = t2;

    // Step 3: Return the head of the merged list (skip dummy node)
    return dNode->next;
}


// Function: Print all the nodes


void print(node* head){
    node* temp = head;
    while(temp != nullptr){
        cout << temp->val;
        if(temp->next) cout << " -> ";
        temp = temp->next;
    }
    cout << endl;
}


int main()
{
    int n;
    cout << "Enter The size of n: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the val of arr1: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int m;
    cout << "Enter the size of m: ";
    cin >> m;

    vector<int> arr2(m);
    cout << "Enter the value of arr2: ";
    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }

    
    node *head1 = convertArr2LL(arr);
    node *head2 = convertArr2LL(arr2);

    cout << "\nBrute Force Merge: ";
    node *newhead = mergeTwoLists1(head1, head2);
    print(newhead);

    cout << endl;

    // rebuild lists for second merge
    head1 = convertArr2LL(arr);
    head2 = convertArr2LL(arr2);

    cout << "Optimal Merge: ";
    node *newhead2 = mergeTwoLists(head1, head2);
    print(newhead2);

    return 0;
}
