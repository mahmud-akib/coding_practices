#include<iostream>
using namespace std;

int c = 45;
int a = 23;
int b = 54;

int main()
{
    
    int a, b, c;

    cout<<"Enter the value of a : "<<endl;
    cin>>a;
    cout<<"Enter the value of b : "<<endl;
    cin>>b;
    
    c=a+b;

    cout<<"The value of sum is : "<<c<<endl;
    cout<<"The global value of c is : "<<::c<<endl; // Here :: is scope resulation operator
    cout<<"The global value of a is : "<<::a<<endl;
    cout<<"The global value of b is : "<<::b<<endl; 
    

   //float f=45.5f;
   //long double z=64.7l;

   //cout<<"The value of f is = "<<f<<endl<<"The value of z is = "<<z<<endl;

    float roy = 344.45;
    float & joy = roy;
    cout<<roy<<endl;
    cout<<joy<<endl;

    return 0;
}