#include<iostream>
using namespace std;


int main()
{
    int n,sum=1;

    cout<<"\nEnter the size of n: ";
    cin>>n;

    for (int i = 0; i <= n; i++)
    {
        sum+=i;
    }

    cout<<"\nThe sum of 1 to "<<n<<" is "<<sum<<endl;   
    return 0;
}