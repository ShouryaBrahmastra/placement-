#include<iostream>
#include<math.h>
using namespace std;


int main()
{
    int n,ans=0,i=0;
    cout<<"Enter the decimal value : ";
    cin>>n;

    while (n!=0)
    {
        int digit=n&1;
        ans=(digit*pow(10,i))+ans;
        n=n>>1;
        i++;
    }
    cout<<"The binary value is: "<<ans<<endl;
    
    return 0;
}