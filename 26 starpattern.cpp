#include<iostream>
using namespace std;


int main()
{
    int n,row=1,count=1;
    

    cout<<"\nEnter the size of the matrix(n x n):  ";
    cin>>n;

    while (row<=n)
    {
        int col=1;
        
        while (col<=n)    
        {    char ch='A'+row+col-2;        
            cout<<ch<<" ";
            col++;
        }
        cout<<endl;
        row++;        
    }
    
    
    
    return 0;
}