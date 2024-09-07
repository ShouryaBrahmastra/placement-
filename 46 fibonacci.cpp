#include<iostream>
using namespace std;


int main()
{
    int n,a=0,b=1,nth;

    cout<<"Enter the value range for fibonacci series: "<<endl;
    cin>>n;

    cout<<"\nThe fibonacci series is :\n"<<a<<" "<<b<<" ";

    for (int i = 3; i <= n; i++)
    {
        nth=a+b;
        cout<<nth<<" ";
        a=b;
        b=nth;
    }
           
    return 0;
}