#include<iostream>
using namespace std;


int main()
{
    int n,row=1,count=1;
    char ch='A';

    cout<<"\nEnter the size of the matrix(n x n):  ";
    cin>>n;

    while (row<=n)
    {
        int col=1;
        
        while (col<=n)    
        {            
            cout<<ch++<<" ";
            col++;
        }
        cout<<endl;
        row++;        
    }
    
    
    
    return 0;
}