#include<iostream>
using namespace std;


int main()
{
    int n,row=1,count=1;
    

    cout<<"\nEnter the size of the matrix(n x n):  ";
    cin>>n;
    char ch='A'+row-1; 
    while (row<=n)
    {
        int col=1;
        
        while (col<=row)    
        {          
            cout<<ch++<<" ";
            col++;
        }
        cout<<endl;
        row++;        
    }
    
    
    
    return 0;
}