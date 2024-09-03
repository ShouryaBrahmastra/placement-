#include<iostream>
using namespace std;


int main()
{
    int i,n,sum=0;
    cout<<"\nEnter the natural number to sum it up:  ";
    cin>>n;

    while (i <= n)
    {
        sum=sum+i;
        i++;
    }
    cout<<"\nThe sum of the natural number "<<n<<" is : "<<sum<<endl;
       
    return 0;
}