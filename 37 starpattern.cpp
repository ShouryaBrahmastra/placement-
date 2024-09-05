#include<iostream>
using namespace std;


int main()
{
    int n,row=1;
    

    cout<<"\n\nEnter the size of the matrix(n x n):  ";
    cin>>n;

    while (row<=n)
    {
        int space=n-row;
        while (space)
        {
            cout<<" ";
            space--;
        }
        
        int col=1;
        
        while (col<=row)    
        {   
            int count=col;
            cout<<count;
            col++;
        }

        int start=row-1;
        while (start)
        {
            cout<<start;
            start--;
        }
        

        cout<<endl;
        row++;        
    } 
    
    
    return 0;
}