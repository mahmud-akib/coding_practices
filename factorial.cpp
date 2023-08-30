#include<iostream>
using namespace std;

int fact(int n)
{
    if(n>=1){
        return n*fact(n-1);
    }
    else{
        return 1;
    }
}

int main()
{
    int n,i;
    int result;

    cout<<"Enter a number : ";
    cin>>n; 

    cout<<"The Factorial series is = ";

    for(i=1; i<=n; i++)
    {
        result = fact(n);

        cout<<i;

    }
    cout<<endl<<"The Factorial number is = "<<result<<endl;

    return 0;

}