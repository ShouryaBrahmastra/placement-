#include <iostream>
using namespace std;

int main() {
    int i, x = 0;

    cout<<"\n\nEnter the size of the matrix(n x n):  ";
    cin>>i;
    
    while (i >= 1) {
        int j = 1;
        
        // Print the first part of the pattern (1 to i)
        while (j <= i) {
            cout << j;
            j++;
        }
        
        // Print the star (* spaces)
        int y = 1;
        while (y <= x) {
            cout << '*';
            y++;
        }
        
        // Print the second part of the pattern (i to 1)
        int k = i;
        while (k >= 1) {
            cout << k;
            k--;
        }
        
        // Move to the next line
        cout << endl;
        
        // Update values for next iteration
        i--;
        x += 2;
    }
    
    return 0;
}
