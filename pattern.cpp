#include<iostream>
using namespace std;

int main()
{
    int row, col;

    cin>>row>>col;

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<" *";
        }
        cout<<endl;
    }
    
}


// ************ Hollow Rectangular Pattern ************

#include<iostream>
using namespace std;

int main()
{
    int row, col;

    cin>>row>>col;

    for(int i=1; i<=row; i++){
        for(int j=1; j<=col; j++){
            if(i==1 || i==row || j==1 || j==col){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}

// ************** Half pitamid **************

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i=n; i>=1; i--){
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}


// *********** Half piramid 180 ***********

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(j<=n-i){
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }
    return 0;
}


