#include<iostream>
using namespace std;


int main()
{
    int n,row=1;
    

    cout<<"\n\nEnter the size of the matrix(n x n):  ";
    cin>>n;

    while (row<=n)
    {
        int space=row-1;
        while (space)
        {
            cout<<" ";
            space--;
        }
        
        int col=1;
        
        while (col<=n-row+1)    
        {   
            int count=row;
            cout<<count;
            col++;
        }
        cout<<endl;
        row++;        
    } 
    
    
    return 0;
}