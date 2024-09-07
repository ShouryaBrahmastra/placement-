#include<iostream>
using namespace std;


int main()
{
    int a,b;

    cout<<"\nEnter the two elements for bitwize operation:  ";   
    cin>>a>>b;

    cout<<""<<a<<" & "<<b<<" = "<<(a&b)<<endl; //and operator
    cout<<""<<a<<" | "<<b<<" = "<<(a|b)<<endl; //or operator
    cout<<"~"<<a<<" = "<<(~a)<<endl; //not operator
    cout<<""<<a<<" ^ "<<b<<" = "<<(a^b)<<endl; //xor operator

    //left shift multiply by 2
    if (a>b)
    {
        cout<<""<<a<<"<<"<<b<<" = "<<(a<<b)<<endl;
    }
    else
    {
        cout<<""<<b<<"<<"<<a<<" = "<<(b<<a)<<endl;
    }
    //right shift divide by 2
    if (a>b)
    {
        cout<<""<<a<<">>"<<b<<" = "<<(a>>b)<<endl;
    }
    else
    {
        cout<<""<<b<<">>"<<a<<" = "<<(b>>a)<<endl;
    }
    
    
    

    return 0;
}