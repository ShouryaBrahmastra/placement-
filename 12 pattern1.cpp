#include<iostream>
using namespace std;


int main()
{
    int n,i=1;

    cout<<"\nEnter the size of matrix(n x n): ";
    cin>>n;

    while (i<=n)
    {
        int j=1;
        while (j<=n)
        {
            cout<<"*";
            j+=1;
        }
        cout<<endl;
        
        i+=1;
    }
       
    return 0;
}