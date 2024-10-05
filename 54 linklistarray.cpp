// #include<iostream>
// using namespace std;

// int avail;  // Global availability pointer

// void insert(int arr[], int arr1[], int &start, int data) {
//     int new_node = avail;        // Rename 'new' to 'new_node'
//     avail = arr1[avail];         // Update avail to next free position
//     arr[new_node] = data;        // Insert data
//     arr1[new_node] = start;      // Point to the previous start
//     start = new_node;            // Update start to the new node
// }

// int main() {
//     int arr[] = {-1, 20, 16, -1, 14, 45, 25};  // -1 represents NULL
//     int arr1[] = {-1, 6, 5, 1, -1, 3, 4};      // -1 represents NULL
//     int data;
    
//     avail = 3;  // Initialize avail to the first free position
//     int start = 0;  // Initialize start
    
//     cout << "Enter data to insert: ";
//     cin >> data;
    
//     insert(arr, arr1, start, data);  // Call insert function
//     insert(arr, arr1, start, data);
//     cout << "Updated array: ";
//     for(int i = 0; i < 7; i++) {    // Iterate over the array to print the result
//         cout << arr[i] << "\t";
//     }
//     cout<<"";
    
//     return 0;
// }


#include <iostream>
using namespace std;

const int MAX = 100;  // Maximum number of nodes
int INFO[MAX];        // Array to store data (info) of nodes
int LINK[MAX];        // Array to store the link (index) to the next node

int START = -1;       // Start of the linked list (-1 means NULL/empty list)
int AVAIL = 0;        // Start of the availability list (free list)

void initialize() {
    // Initialize the availability list by linking all free nodes
    for (int i = 0; i < MAX - 1; i++) {
        LINK[i] = i + 1;
    }
    LINK[MAX - 1] = -1;  // Last node points to NULL (-1)
}

// Algorithm 5.5: INSLOC (implemented with arrays)
void INSLOC(int LOC, int ITEM) {
    // Step 1: Check for OVERFLOW (i.e., if AVAIL is NULL)
    if (AVAIL == -1) {
        cout << "OVERFLOW: No available space." << endl;
        return;
    }

    // Step 2: Remove the first node from the AVAIL list
    int NEW = AVAIL;
    AVAIL = LINK[AVAIL];

    // Step 3: Copy the new data into the new node
    INFO[NEW] = ITEM;

    // Step 4: Insert the new node at the correct position
    if (LOC == -1) {
        // Insert as the first node (head)
        LINK[NEW] = START;
        START = NEW;
    } else {
        // Insert after the node with location LOC
        LINK[NEW] = LINK[LOC];
        LINK[LOC] = NEW;
    }

    // Step 5: Exit (function ends)
}

// Function to display the linked list
void display() {
    int temp = START;
    while (temp != -1) {
        cout << INFO[temp] << " -> ";
        temp = LINK[temp];
    }
    cout << "NULL" << endl;
}

int main() {
    initialize();  // Initialize the AVAIL list

    cout<<endl;
    cout<<endl;
    // Insert items into the list
    INSLOC(-1, 10);  // Insert 10 as the first node
    INSLOC(0, 20);   // Insert 20 after node at index 0
    INSLOC(1, 30);   // Insert 30 after node at index 1

    // Display the list
    display();

    cout<<endl;
    return 0;
}
