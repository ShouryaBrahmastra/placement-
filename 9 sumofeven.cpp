#include<iostream>
using namespace std;


int main()
{
    int i,n,sum=0;
    cout<<"Enter the number up till where we need the even sum: ";
    cin>>n;

    while (i<=n)
    {
        if(i%2==0)
        {
            sum+=i;
        }
        i++;
    }

    cout<<"The sum of natural number up till "<<n<<" is : "<<sum<<endl;
       
    return 0;
}