#include<iostream>
using namespace std;


int main()
{
    int ch;

    do
    {
        cout<<"\n Choose option 1 or 2\n";
        cout<<"\n1. Fahrenheit to Celsius conversion";
        cout<<"\n2. Celsius to Fahrenheit conversion\n";
        cout<<"3. Exit\n";
        cin>>ch;

        if (ch==1)
        {
            float i=1,cel=0;
            cout<<"\nEnter the temperature in Fahrenheit\n";
            cin>>i;
            cel=(i-32)/(1.8);
            cout<<"The temperature "<<i<<"F is equal to "<<cel<<"C"<<endl;
        }
        if(ch==2)
        {
            float i=1,far=0;
            cout<<"\nEnter the temperature in Celsius\n";
            cin>>i;
            far=(i*1.8)+32;
            cout<<"The temperature "<<i<<"C is equal to "<<far<<"F"<<endl;
        }
    } while (ch!=3);
        
       
    return 0;
}