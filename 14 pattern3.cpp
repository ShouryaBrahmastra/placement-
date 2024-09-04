#include<iostream>
using namespace std;


int main()
{
    int n,i=1;

    cout<<"\nEnter the size of the matrix(n x n): ";
    cin>>n;

    while (i<=n)
    {
        int j=i;
        while (j<=n)
        {
            cout<<i<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
       
    return 0;
}