#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;

int main(){
    stack<char>magi;
    char x;
    for(int i=1; i<=5; i++){
        cin>>x;
        magi.push(x);   
    }
    while (!magi.empty())
    {
        cout<<magi.top()<<endl;
        magi.pop();
    }
}